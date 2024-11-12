# Project Title

## Description
This project demonstrates how to use the `yaml-cpp` library to parse YAML files in a C++ application. We use `yaml-cpp` to load and retrieve values from a YAML file, making it easy to manage structured data.

## Requirements
- C++17 compiler (e.g., `g++`, `clang`)
- `yaml-cpp` library (for parsing YAML files)

## Installing yaml-cpp

This project depends on `yaml-cpp` for parsing YAML files. Follow these steps to download, build, and install `yaml-cpp` on your system.

### Method 1: Installing from a Package Manager

**Linux (Ubuntu/Debian)**
   ```bash
   sudo apt-get update
   sudo apt-get install libyaml-cpp-dev
# Installing on: #
**Linux (Fedora)**
    sudo dnf install yaml-cpp

**MacOS**
    brew install yaml-cpp

# Steps to compile and run the project:

in terminal type:
make

Run the executable:
./yaml_parser

Removing compiled files and the executable, run:
make clean