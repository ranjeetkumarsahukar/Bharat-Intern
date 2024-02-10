#include <stdio.h>

#define ROWS 3
#define COLS 3

void createMatrix(int matrix[ROWS][COLS]) {
    printf("Enter the elements of the matrix (%d x %d):\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    printf("Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int isEqual(int matrix1[ROWS][COLS], int matrix2[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return 0; // Not equal
            }
        }
    }
    return 1; // Equal
}

void sumRowsColumns(int matrix[ROWS][COLS]) {
    int rowSum[ROWS] = {0};
    int colSum[COLS] = {0};

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            rowSum[i] += matrix[i][j];
            colSum[j] += matrix[i][j];
        }
    }

    printf("Row sums:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    printf("Column sums:\n");
    for (int j = 0; j < COLS; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];

    printf("Creating Matrix 1:\n");
    createMatrix(matrix1);

    printf("\nCreating Matrix 2:\n");
    createMatrix(matrix2);

    printf("\n");
    printMatrix(matrix1);
    printf("\n");
    printMatrix(matrix2);

    if (isEqual(matrix1, matrix2)) {
        printf("\nThe matrices are equal.\n");
    } else {
        printf("\nThe matrices are not equal.\n");
    }

    printf("\nSum of rows and columns for Matrix 1:\n");
    sumRowsColumns(matrix1);

    printf("\nSum of rows and columns for Matrix 2:\n");
    sumRowsColumns(matrix2);

    return 0;
}

