import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from sprite_validator import SpriteError, parse_sprite, slug_name


class SpriteValidatorTest(unittest.TestCase):
    def make(self, text):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        path = Path(tmp.name) / "test.sprite.txt"
        path.write_text(text, encoding="utf-8")
        return path

    def test_valid_8x8(self):
        path = self.make("name: hero\nwidth: 8\nheight: 8\n\n..XXXX..\n.XXXXXX.\nXX.XX.XX\nXXXXXXXX\n..XXXX..\n.XX..XX.\nXX....XX\n........\n")
        self.assertEqual(parse_sprite(path)["width"], 8)

    def test_invalid_width(self):
        path = self.make("name: bad\nwidth: 33\nheight: 1\n\nX\n")
        with self.assertRaises(SpriteError):
            parse_sprite(path)

    def test_invalid_character(self):
        path = self.make("name: bad\nwidth: 2\nheight: 1\n\nX?\n")
        with self.assertRaises(SpriteError):
            parse_sprite(path)

    def test_non_rectangular_grid(self):
        path = self.make("name: bad\nwidth: 3\nheight: 2\n\nXXX\nXX\n")
        with self.assertRaises(SpriteError):
            parse_sprite(path)

    def test_slug_name_safe(self):
        self.assertEqual(slug_name("7 Cool Hero!"), "sprite_7_cool_hero")


if __name__ == "__main__":
    unittest.main()
