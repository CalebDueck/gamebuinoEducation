# Remote Button Viewer

Use these local sketches:

- `sketches/02_remote_button_sender/02_remote_button_sender.ino`
- `sketches/02_remote_button_receiver/02_remote_button_receiver.ino`

Goal:

- press a button on one Gamebuino and show that input on the other Gamebuino

Steps:

1. Upload the sender sketch to one device.
2. Upload the receiver sketch to the other.
3. Connect the verified I2C hardware with power off.
4. Power both devices on.
5. Press buttons on the sender.
6. Watch the receiver for the matching result.

Good small changes:

- display a different letter for each button
- add one more button to the sent data
- change the receiver feedback from text to a shape or popup

Checkpoint:

- one device reads input
- the other device shows matching feedback
- you can name which data traveled between devices

Safety: only connect Gamebuino consoles using the correct verified I2C hardware. Power off before changing cables.
