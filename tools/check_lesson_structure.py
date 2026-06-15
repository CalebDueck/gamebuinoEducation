#!/usr/bin/env python3
from pathlib import Path

REQUIRED = ["README.md"]
LESSONS = Path("lessons")

def main():
    failed = False
    for lesson in sorted(p for p in LESSONS.iterdir() if p.is_dir()):
        required = REQUIRED.copy()
        if lesson.name == "13-final-project":
            required.append("project-menu.md")
        for filename in required:
            if not (lesson / filename).exists():
                print(f"Missing {lesson / filename}")
                failed = True
        readme = lesson / "README.md"
        if readme.exists():
            text = readme.read_text(encoding="utf-8")
            if text.count("```cpp") > 3 or "#include <Gamebuino.h>" in text:
                print(f"{readme} may contain too much complete code")
                failed = True
            for heading in ["Mission Brief", "Learning Targets", "New Gear", "Starter File", "Quest Log", "Core Quest", "Challenge Quest", "Checkpoint", "Bug Hunt", "Power-Ups", "Reflection"]:
                if heading not in text:
                    print(f"{readme} missing heading: {heading}")
                    failed = True
            if "Do not paste a finished sketch" not in text:
                print(f"{readme} missing anti-copy guidance")
                failed = True
    raise SystemExit(1 if failed else 0)

if __name__ == "__main__":
    main()
