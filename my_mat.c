#include <stdio.h>
#include <math.h>
#include "my_mat.h"

int mat[10][10];
void shorestPath();

void matrixValue()
{
    printf("enter the matrix:");

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    shorestPath();
}

void checkPath(int x, int y)
{
    if (mat[x][y] == 0)
    {
        printf("False");
    }
    else
        printf("True");
}

int Fun3(int i, int j)
{
    if (mat[i][j] == 0)
    {
        return -1;
    }
    else
        return mat[i][j];
}

int checkMin_value(int i, int j)
{
    if (i == 0)
    {
        return j;
    }
    if (j == 0)
    {
        return i;
    }
    else
        return i < j ? i : j;
}

void shorestPath()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (i == j)
                {
                    mat[i][j] = 0;
                }

                else if (mat[i][k] != 0 && mat[k][j] != 0)
                {
                    mat[i][j] = checkMin_value(mat[i][j], mat[i][k] + mat[k][j]);
                }
            }
        }
    }
}

