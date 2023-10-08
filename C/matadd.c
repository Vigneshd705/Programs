#include <stdio.h>
#include <conio.h>
#define MAX_SIZE 10

void matrixAddition(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int res[][MAX_SIZE], int rows, int cols, int i, int j) {
    if (i == rows) {
        return;
    }
    if (j == cols) 
    {
        matrixAddition(mat1, mat2, res, rows, cols, i + 1, 0);
        return;
    }
    res[i][j] = mat1[i][j] + mat2[i][j];
    matrixAddition(mat1, mat2, res, rows, cols, i, j + 1); 
}
void displayMatrix(int mat[][MAX_SIZE], int rows, int cols) {
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], res[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    printf("Enter the number of rows (max %d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter the number of columns (max %d): ", MAX_SIZE);
    scanf("%d", &cols);
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    matrixAddition(mat1, mat2, res, rows, cols, 0, 0);
    printf("Resultant matrix after addition:\n");
    displayMatrix(res, rows, cols);
    return 0;
    getch();
}
