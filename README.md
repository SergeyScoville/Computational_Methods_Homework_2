# Homework 2 Project

## Overview

This project is a C++ program that processes data from a specified file, calculates the average and standard deviation of `y` values, and displays these statistics. It also has the functionality to plot data, specifically the data stored in the `asst1-1.txt` file, or any file structured the same. The project is built using CMake.

## Building the Project

To build the project, follow these steps:

1. **Get the project:**

   You first need to get the code and project. Naviage to a directory you want to put the project and then run:

   ```bash
   git clone https://github.com/SergeyScoville/Computational_Methods_Homework_2.git

2. **Navigate to the `build` Directory:**

   First, ensure that you are in the root directory of the project. Then, create or navigate to the `build` directory:

   ```bash
   mkdir -p build
   cd build

3. **Run CMake:**

   In the `build` directory, generate the build system files using CMake:

   ```bash
   cmake ..

4. **Compile the Project:**

   After running CMake, compile the project using `make`:

   ```bash
   make

## Running the Program

After building the project, run the executable:

```bash
./Homework2
```

## Example

Here is how you would run the program step by step:

```bash
cmake ..
make
./Homework2
```
When prompted:
```plaintext
Enter the number of vectors (must be a positive integer): 5
```
