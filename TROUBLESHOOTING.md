# Troubleshooting

- Blank screen: draw inside `if (gb.update())` and check battery/contrast.
- Compile error: read the first error and check nearby braces or semicolons.
- Upload failure: confirm board, port, cable, and teacher-verified settings.
- Button repeats too fast: use `pressed()` for events and `repeat()` for held movement.
