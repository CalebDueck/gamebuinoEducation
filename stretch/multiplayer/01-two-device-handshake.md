# Two-Device Handshake

Use these local sketches:

- `sketches/01_handshake_master/01_handshake_master.ino`
- `sketches/01_handshake_slave/01_handshake_slave.ino`

Goal:

- prove that two Gamebuino devices can send a simple ready signal to each other

Steps:

1. Upload the master sketch to one device.
2. Upload the slave sketch to the other.
3. Connect the verified I2C hardware with power off.
4. Turn both devices on.
5. Watch for the ready message or handshake response.

Checkpoint:

- both devices boot
- both devices show that a connection happened
- you can explain which one is master and which one is slave

Safety: only connect Gamebuino consoles using the correct verified I2C hardware. Power off before changing cables.
