# Tiny Two-Player Pong

Use these local sketches:

- `sketches/03_tiny_pong_host/03_tiny_pong_host.ino`
- `sketches/03_tiny_pong_client/03_tiny_pong_client.ino`

Goal:

- run a tiny multiplayer Pong where one device hosts the game and the other joins as the second player

Steps:

1. Upload the host sketch to one device.
2. Upload the client sketch to the other.
3. Connect the verified I2C hardware with power off.
4. Start both devices.
5. Test whether both paddles respond.
6. Watch whether ball and score stay in sync.

Good small changes:

- change paddle speed
- change the win score
- make the ball slightly slower for easier testing

Checkpoint:

- both players can control a paddle
- the game stays synchronized
- you can explain which device owns the main game rules

Safety: only connect Gamebuino consoles using the correct verified I2C hardware. Power off before changing cables.
