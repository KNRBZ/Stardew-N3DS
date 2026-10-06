# Architecture

## Runtime layers

The port will be split into clear layers:

1. **Stardew game logic**
2. **Compatibility layer**
   - XNA/MonoGame API replacements
   - timing
   - input
   - filesystem
   - audio
3. **3DS platform layer**
   - libctru
   - SDL where useful
   - GPU/display
   - DSP audio
   - SD card saves
4. **3DS UI**
   - top gameplay framebuffer
   - bottom touchscreen interface

The goal is to keep platform-specific code isolated so the game logic remains portable.

## Display

Top screen: 400×240.

Bottom screen: 320×240.

We will not stretch one framebuffer across both displays. The bottom screen will be a dedicated 3DS-native UI.
