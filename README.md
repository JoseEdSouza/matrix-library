# 🧮 C Matrix Library 🧮

This C matrix library, implemented in the `matrix.h` and `matrix.c` files, provides various functions for performing matrix operations. It is designed to work with both integer and floating-point matrices. Below, you'll find an overview of the library and its functionalities.

## Table of Contents

1. [Functions](#functions)
2. [Compilation](#compilation)
3. [Prerequisites](#prerequisites)
4. [Contributions](#contributions)

## Functions

### Memory Management

- 🗑️ `freedom`: Frees the memory allocated for a 2D array.
  
### Integer Matrices

- ➕ `CreateMatrixInt`: Creates a 2D integer matrix of size `i x j`.
- 📝 `InputMatrixInt`: Inputs elements into an integer matrix.
- 📄 `PrintMatrixInt`: Prints a 2D matrix of integers with a specified number of rows and columns.
- 🔄 `TransMatrixInt`: Returns the transpose of an integer matrix.
- ➖ `SubMatrix`: Returns a submatrix by excluding a specific row and column.
- ➗ `det`: Calculates the determinant of an integer matrix using recursion.
- 🔄 `Inverse`: Returns the inverse of an integer matrix.
- ✖️ `MultipliMatrix`: Computes the product of two integer matrices.

### Floating-Point Matrices

- ➕ `CreateMatrixFloat`: Creates a 2D floating-point matrix of size `i x j`.
- 📄 `PrintMatrixFloat`: Prints a 2D matrix of floats with a specified number of rows and columns.

## Compilation

To compile the C matrix library, you can use a C compiler such as GCC. Here's an example compilation command for a program that uses the library:

```bash
gcc -o my_program my_program.c matrix.c -lm
```

- Replace `my_program` with the name of your program.
- Make sure to link with the math library (`-lm`) when using floating-point functions.

## Prerequisites

To use this library in your C programs, you need to include the `matrix.h` header file and link with the `matrix.c` source file during compilation. Additionally, make sure you have a C compiler installed on your system, such as GCC.

Feel free to explore and use this library for your matrix-related projects. If you encounter any issues or have suggestions for improvements, please don't hesitate to contribute or provide feedback.

Happy matrix operations! 🧮🚀

## Contributions

If you have suggestions for making the code more efficient or if you find any errors, please don't hesitate to [open an issue](https://github.com/JoseEdSouza/matrix-library/issues) or [submit a pull request](https://github.com/JoseEdSouza/matrix-library/pulls).
