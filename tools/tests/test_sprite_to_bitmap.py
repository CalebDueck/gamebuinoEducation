import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from sprite_to_bitmap import header_for, pack_rows
from sprite_validator import parse_sprite


class SpriteToBitmapTest(unittest.TestCase):
    def make(self, text):
        tmp = tempfile.TemporaryDirectory()
        self.addCleanup(tmp.cleanup)
        path = Path(tmp.name) / "test.sprite.txt"
        path.write_text(text, encoding="utf-8")
        return parse_sprite(path)

    def test_pack_8x8(self):
        sprite = self.make("name: hero\nwidth: 8\nheight: 8\n\nX.......\n.X......\n..X.....\n...X....\n....X...\n.....X..\n......X.\n.......X\n")
        self.assertEqual(pack_rows(sprite), [128, 64, 32, 16, 8, 4, 2, 1])

    def test_pack_10x8_padding(self):
        sprite = self.make("name: wide\nwidth: 10\nheight: 8\n\nX........X\n..........\n..........\n..........\n..........\n..........\n..........\n.........X\n")
        self.assertEqual(pack_rows(sprite)[0:2], [128, 64])
        self.assertEqual(pack_rows(sprite)[-2:], [0, 64])

    def test_header_symbol(self):
        sprite = self.make("name: hero example\nwidth: 1\nheight: 2\n\nX\n.\n")
        text = header_for(sprite)
        self.assertIn("const uint8_t HERO_EXAMPLE[] PROGMEM", text)
        self.assertIn("0b10000000", text)


if __name__ == "__main__":
    unittest.main()
