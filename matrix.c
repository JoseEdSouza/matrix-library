#ifndef MATRIX_C
#define MATRIX_C
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void freedom(int **_Memory, int l)
{
    for (int i = 0; i < l; i++)
    {
        free(_Memory[i]);
    }
    free(_Memory);
}


int **CreateMatrixInt(int i, int j)
{
    int **Matriz = (int**)malloc(i * (sizeof(int *)));
    for (int cont = 0; cont < i; cont++)
        Matriz[cont] =(int*) malloc(j * sizeof(int));
    return Matriz;
}


float **CreateMatrixFloat(int i, int j)
{
    float **Matriz = (float**)malloc(i * (sizeof(float *)));
    for (int cont = 0; cont < i; cont++)
        Matriz[cont] = (float*)malloc(j * sizeof(float));
    return Matriz;
}


void InputMatrixInt(int **Matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        printf("//Digite os %d elementos da linha %d\n", c, (i + 1));
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &Matriz[i][j]);
        }
    }
}


void PrintMatrixInt(int **Matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%5d", Matriz[i][j]);
        }
        printf("\n");
    }
}


void PrintMatrixfloat(float **Matriz, int l, int c)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%10.3g", Matriz[i][j]);
        }
        printf("\n");
    }
}


int **TransMatrixInt(int **matriz, int l, int c)
{
    int **transposta = CreateMatrixInt(l, c);
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transposta[i][j] = matriz[j][i];
        }
    }
    return transposta;
}

int **SubMatrix(int **matriz, int o, int l, int c)
{
    int **submatriz = CreateMatrixInt(o - 1, o - 1);
    for (int i = 0, w = 0; i < o; i++)
    {
        if (i == (l - 1))
            continue;
        else
        {
            w++;
            for (int j = 0, z = 0; j < o; j++)
            {
                if (j == (c - 1))
                    continue;
                else
                {
                    z++;
                    submatriz[w - 1][z - 1] = matriz[i][j];
                }
            }
        }
    }
    return submatriz;
}

int det(int **matriz, int o)
{
    int r = 0;
    if (o == 1)
    {
        r = matriz[0][0];
        return r;
    }
    else if (o == 2)
    {
        r = ((matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]));
        return r;
    }
    else
    {
        for (int i = 0, j = 0; j < o; j++)
        {
            r += (matriz[i][j] * (pow((-1), (i + j + 2))) * det(SubMatrix(matriz, o, 1, j + 1), (o - 1)));
        }
        return r;
    }
}

float **Inverse(int **matriz, int o)
{
    float determinante = (float)det(matriz, o);
    int **MatrizCof = CreateMatrixInt(o, o); // matriz dos cofatores.
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            MatrizCof[i][j] = ((pow((-1), (i + j + 2))) * det(SubMatrix(matriz, o, i + 1, j + 1), (o - 1)));
        }
    }
    int **adjunta = TransMatrixInt(MatrizCof, o, o); // matriz adjunta (transposta da matriz dos cofatores)
    float **inversa = CreateMatrixFloat(o, o);        // recebe a adjunta multiplicada pelo o inverso do determinate.
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            inversa[i][j] = (float)(1.00 / determinante) * (float)adjunta[i][j];
        }
    }
    freedom(adjunta, o);
    freedom(MatrizCof, o);
    return inversa;
}

int **MultipliMatrix(int **Matriz_a, int la, int ca, int **Matriz_b, int lb, int cb)
{
    int **resultado = CreateMatrixInt(la, cb);
    for (int i = 0; i < la; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            resultado[i][j] = 0;
            for (int w = 0; w < ca; w++)
            {
                resultado[i][j] += (Matriz_a[i][w] * Matriz_b[w][j]);
            }
        }
    }
    return resultado;
}

#endif