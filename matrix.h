/* The above code is a header file named "matrix.h" that contains several functions related to matrix
operations. These functions include: */

#ifndef MATRIX_H
#define MATRIX_H

/**
 * The function "freedom" frees the memory allocated for a 2D array.
 *
 * @param _Memory _Memory is a pointer to a pointer to an integer. It represents a dynamically
 * allocated 2D array.
 * @param l The parameter "l" represents the length or size of the memory array.
 */
void freedom(int **_Memory, int l);
/**
 * The function CreateMatrixInt creates a 2D integer matrix of size i x j.
 *
 * @param i The parameter "i" represents the number of rows in the matrix.
 * @param j The parameter "j" represents the number of columns in the matrix.
 *
 * @return a pointer to a pointer to an integer, which represents a dynamically allocated matrix of
 * integers.
 */
int **CreateMatrixInt(int i, int j);
/**
 * The function `PrintMatrixInt` prints a 2D matrix of integers with a specified number of rows and
 * columns.
 * 
 * @param Matriz A pointer to a 2D array of integers.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 * 
 */
void PrintMatrixInt(int **Matriz, int l, int c);
/**
 * The function receives a matrix and its size and inputs the elements of the matrix.
 * 
 * @param Matriz A pointer to a 2D array of integers.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 */
void InputMatrixInt(int **Matriz, int l, int c);
/**
 * The function CreateMatrixFloat creates a 2D integer matrix of size i x j.
 *
 * @param i The parameter "i" represents the number of rows in the matrix.
 * @param j The parameter "j" represents the number of columns in the matrix.
 *
 * @return a pointer to a pointer to an float, which represents a dynamically allocated matrix of
 * Float.
 */
float **CreateMatrixFloat(int i, int j);
/**
 * The function `PrintMatrixFloat` prints a 2D matrix of floats with a specified number of rows and
 * columns.
 * 
 * @param Matriz A pointer to a 2D array of floats.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter "c" represents the number of columns in the matrix.
 * 
 */
void PrintMatrixfloat(float **Matriz, int l, int c);
/**
 * The function TransMatrixInt takes a matrix as input and returns its transpose.
 * 
 * @param matriz A 2D integer matrix of size l x c.
 * @param l The parameter "l" represents the number of rows in the matrix.
 * @param c The parameter `c` represents the number of columns in the matrix.
 * 
 * @return a pointer to a 2D integer array, which represents the transposed matrix.
 */
int **TransMatrixInt(int **matriz, int l, int c);
/**
 * The function SubMatrix takes a matrix, its dimensions, and a specific row and column, and returns a
 * submatrix by excluding the specified row and column.
 * 
 * @param matriz A 2D integer array representing the original matrix.
 * @param o The parameter "o" represents the order or size of the square matrix. It indicates the
 * number of rows and columns in the matrix.
 * @param l The parameter "l" represents the row index of the element in the matrix that you want to
 * exclude from the submatrix.
 * @param c The parameter `c` represents the column index of the element in the matrix that you want to
 * exclude in the submatrix.
 * 
 * @return a pointer to a 2D integer array, which represents the submatrix.
 */
int **SubMatrix(int **matriz, int o, int l, int c);
/**
 * The function calculates the determinant of a square matrix using recursion.
 * 
 * @param matriz The parameter "matriz" is a pointer to a pointer of integers, representing a 2D
 * matrix.
 * @param o The parameter `o` represents the order or size of the square matrix `matriz`.
 * 
 * @return the determinant of the input matrix.
 */
int det(int **matriz, int o);
/**
 * The function takes a matrix and its order as input, and returns the inverse of the matrix.
 * 
 * @param matriz A matrix of integers.
 * @param o The parameter "o" represents the order of the matrix. It indicates the number of rows and
 * columns in the matrix.
 * 
 * @return a float pointer to a 2D array, which represents the inverse of the input matrix.
 */
float **Inverse(int **matriz, int o);
/**
 * The function MultipliMatriz takes two matrices as input and returns their product as a new matrix.
 * 
 * @param Matriz_a A 2D array representing the first matrix.
 * @param la The parameter "la" represents the number of rows in the matrix "Matriz_a".
 * @param ca The parameter "ca" represents the number of columns in the matrix "Matriz_a".
 * @param Matriz_b The parameter "Matriz_b" is a 2D array representing the second matrix in the
 * multiplication operation. It has "lb" rows and "cb" columns.
 * @param lb The parameter "lb" represents the number of rows in the second matrix, Matriz_b.
 * @param cb The parameter "cb" represents the number of columns in the matrix "Matriz_b".
 * 
 * @return a pointer to a 2D integer array.
 */
int **MultipliMatrix(int **Matriz_a, int la, int ca, int **Matriz_b, int lb, int cb);

#include "matrix.c"

#endif