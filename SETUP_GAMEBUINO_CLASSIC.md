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

1. Download Arduino IDE from https://www.arduino.cc/en/software/
2. Open Arduino IDE.
3. Open Library Manager from the books icon or from `Tools` -> `Manage Libraries`.
4. Search for `Gamebuino` and install the Gamebuino Classic library.
5. If Library Manager search does not work, restart Arduino IDE once and try again.
6. If search still fails, scroll the library list manually until you find `Gamebuino`.
7. Open `lessons/00-setup/welcome_badge.ino`.
8. Select the board. For most classroom setups, Gamebuino Classic uses an `Arduino Uno`-compatible target unless your local verified notes say otherwise.
9. Select the port for the connected device.
10. Compile.
11. Upload.
12. Run the sketch on the Gamebuino Classic.

## Board And Port Checklist

- Board: check `Tools` -> `Board` and confirm the verified `Arduino Uno` target for your Gamebuino Classic setup.
- Port: unplug and reconnect the Gamebuino, then look for the port entry that appears or changes.
- Port label: if your diagnostics or port menu shows `USB` in the device name, prefer that entry over unrelated serial ports.
- Wrong port warning: if upload fails immediately, you may have selected a different device such as another board, adapter, or built-in serial port.
- Cable check: some USB cables only provide power. If the board powers on but no new port appears, try another cable.

## First-Time Diagnostic Clues

- If the Gamebuino turns on but upload fails, re-check both `Board` and `Port` before changing code.
- If multiple ports appear, disconnect other USB devices if possible, then reconnect only the Gamebuino and watch which port shows up.
- If your computer shows a diagnostics panel or device details, look for `USB` in the connected port name.
- If you accidentally connect to the wrong port, the sketch usually will not upload even though compile still succeeds.

## Verify On Your Device First

Classic setup can vary by device batch, computer policy, operating system, and installed Arduino tooling. Verify the exact board, port, upload settings, and library installation path on the actual device you are using. Add screenshots or local notes here after verification.

Do not substitute Gamebuino META setup steps or Python instructions.

## First Troubleshooting Pass

- Blank screen: draw inside `if (gb.update())` and check battery and contrast.
- Compile error: read the first error and check nearby braces or semicolons.
- Upload failure: confirm `Arduino Uno` board selection, the USB-labeled port when available, cable, and your verified settings.
- Button repeats too fast: use `pressed()` for events and `repeat()` for held movement.
