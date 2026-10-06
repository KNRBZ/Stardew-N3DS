# Stardew Valley – Nintendo 3DS / New 3DS

> **Work in progress / research project**

A native Nintendo 3DS porting project for **Stardew Valley**, targeting the New Nintendo 3DS family first.

## Target

- New Nintendo 3DS
- New Nintendo 3DS XL
- New Nintendo 2DS XL
- CIA + 3DSX builds
- Top screen: 400×240 gameplay
- Bottom screen: 320×240 touch UI
- Circle Pad + buttons + touch
- Audio and save support

## Important

This repository contains **porting/build infrastructure and original glue code only**. Stardew Valley's proprietary game code, assets, music and other copyrighted data are not included.

The first technical target is an older Stardew Valley Windows/XNA-compatible codebase because it is a more realistic starting point for a 3DS port than the modern .NET 5/64-bit runtime.

## Status

1. [x] Repository bootstrap
2. [x] New 3DS dual-screen test application skeleton
3. [ ] Build on real New 3DS hardware
4. [ ] SDL/input/audio abstraction
5. [ ] Stardew 1.5.x codebase integration
6. [ ] Graphics compatibility layer
7. [ ] Save/load
8. [ ] Touch UI
9. [ ] CIA packaging
10. [ ] Performance optimization

## License

The original code in this repository is provided under the repository license. Stardew Valley remains the property of its respective rights holders.
