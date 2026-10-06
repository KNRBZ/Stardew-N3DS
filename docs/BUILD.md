# Build

## Requirements

- devkitPro
- devkitARM
- libctru
- make

On Windows, install the current devkitPro 3DS development environment.

## Build

From the repository root:

    make

The resulting 3DSX/ELF artifacts will be placed in the build directory according to devkitPro's standard rules.

CIA packaging will be added after the application has a stable runtime.

## Hardware

The initial target is the **New 3DS family**. Old 3DS support is deliberately postponed because CPU/cache performance and available memory are important for this project.
