# Voxel Engine

https://github.com/user-attachments/assets/47b3f7ce-3157-46a5-8faa-bcd0c895aa4a

## Overview

![overview](assets/overview.png)

## Controls
WASD - Move\
Space - Move upwards\
Shift - Move downwards\
B - Display debug menu\
X - Toggle chunk generation\
R - Hot reload shaders\
Mouse - Look around

## Instructions

Make sure to clone this repository recursively!

```
git clone https://github.com/compsci-adl/voxel-engine --recursive
```

Can also clone with shallow submodules to save space:

```
git clone https://github.com/compsci-adl/voxel-engine --recursive --shallow-submodules
```

If you have cloned it non-recursively:

```
git submodule update --init
```

## Building and running

### Linux, Mac OS, MSYS (Windows)

```sh
./build.sh
```

### Windows - Visual Studio

```bat
.\build.bat
```

### Build flags

To specify building the optimized release version or debug version, add the argument `release` or `debug` to the build script.

Example:

```
./build.sh release
```

If no flag is given, the debug version is built by default.

## Troubleshooting

#### Missing libraries error and ```libs/``` content missing:

Either increase Git's maximum download size, then try again.

```
git config --global http.postBuffer 104857600
git submodule update --init
```

Or manually clone libraries into their corresponding ``libs/`` folder.


#### Missing libraries Ubuntu

In Ubuntu, install all the required packages with:

``` 
sudo apt update
sudo apt install libwayland-dev libxkbcommon-dev libx11-dev libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev mesa-common-dev libgl1-mesa-dev
```

## Contributing

Our voxel engine is currently a work-in-progress, but we still welcome contributions. If you find any issues, have suggestions, or want to request a feature, please follow our [Contributing Guidelines](https://github.com/compsci-adl/.github/blob/main/CONTRIBUTING.md).

## License

This project is licensed under the MIT License.
See [LICENSE](LICENSE) for details.
