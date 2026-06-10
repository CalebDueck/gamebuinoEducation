# Setup Gamebuino Classic

This setup guide is the device-specific reference for first-run setup and troubleshooting.

## What You Need

- Gamebuino Classic
- USB cable
- computer with Arduino IDE or an approved Arduino CLI setup
- Gamebuino Classic library
- optional micro SD card

## Device Prep Checklist

- Charge devices.
- Label devices.
- Test one upload per computer type.
- Prepare backup starter sketches.
- Prepare spare USB cables.

## Hardware Target

This repo is for Gamebuino Classic only. Confirm that you are using the Classic hardware and library, not Gamebuino META or other materials.

## Setup Steps

1. Install or open Arduino IDE.
2. Install the Gamebuino Classic library.
3. Open `projects/00_welcome_badge/welcome_badge.ino`.
4. Select the verified board and port for your device.
5. Compile.
6. Upload.
7. Run the sketch on the Gamebuino Classic.

## Verify On Your Device First

Classic setup can vary by device batch, computer policy, operating system, and installed Arduino tooling. Verify the exact board, port, upload settings, and library installation path on the actual device you are using. Add screenshots or local notes here after verification.

Do not substitute Gamebuino META setup steps or Python instructions.

## First Troubleshooting Pass

- Blank screen: draw inside `if (gb.update())` and check battery and contrast.
- Compile error: read the first error and check nearby braces or semicolons.
- Upload failure: confirm board, port, cable, and your verified settings.
- Button repeats too fast: use `pressed()` for events and `repeat()` for held movement.
