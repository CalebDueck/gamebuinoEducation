# Read PongMulti

Official examples:

- https://raw.githubusercontent.com/Gamebuino/Gamebuino-Classic/master/examples/3.Advanced/PongMulti/PongMulti.ino
- https://raw.githubusercontent.com/Gamebuino/Gamebuino-Classic/master/examples/3.Advanced/PongMulti/master.ino
- https://raw.githubusercontent.com/Gamebuino/Gamebuino-Classic/master/examples/3.Advanced/PongMulti/slave.ino

Focus questions:

- What logic is shared between both devices?
- What logic belongs only to the master?
- What logic belongs only to the slave?
- Which variables or messages move data between devices?

What to notice:

- multiplayer sketches often split roles across separate files
- one device may own the main game rules while the other reports input
- naming matters more as code gets larger

Small change ideas:

- rename one message label so it is easier to understand
- change paddle speed
- change the win score

Checkpoint:

- You can explain what the master controls and what the slave controls.
