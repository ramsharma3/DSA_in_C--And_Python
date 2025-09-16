#include <iostream>
using namespace std;

void inputMatrix(int matrix[][100], int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int A[][100], int B[][100], int C[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void subtractMatrices(int A[][100], int B[][100], int C[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplyMatrices(int A[][100], int B[][100], int C[][100], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int A[][100], int T[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            T[j][i] = A[i][j];
        }
    }
}

void displayMatrix(int matrix[][100], int rows, int cols) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter the number of rows and columns for Matrix A: ";
    cin >> rowsA >> colsA;

    int matrixA[100][100];
    inputMatrix(matrixA, rowsA, colsA);

    cout << "Enter the number of rows and columns for Matrix B: ";
    cin >> rowsB >> colsB;

    int matrixB[100][100];
    inputMatrix(matrixB, rowsB, colsB);

    if (rowsA != rowsB || colsA != colsB) {
        cout << "Matrices cannot be added, subtracted, or multiplied due to different dimensions." << endl;
    } else {
        int resultAdd[100][100];
        int resultSubtract[100][100];
        int resultMultiply[100][100];
        int resultTransposeA[100][100];
        int resultTransposeB[100][100];

        addMatrices(matrixA, matrixB, resultAdd, rowsA, colsA);
        subtractMatrices(matrixA, matrixB, resultSubtract, rowsA, colsA);
        multiplyMatrices(matrixA, matrixB, resultMultiply, rowsA, colsA, colsB);
        transposeMatrix(matrixA, resultTransposeA, rowsA, colsA);
        transposeMatrix(matrixB, resultTransposeB, rowsB, colsB);

        cout << "A:" << endl;
        displayMatrix(matrixA, rowsA, colsA);

        cout << "B:" << endl;
        displayMatrix(matrixB, rowsB, colsB);

        cout << "A + B:" << endl;
        displayMatrix(resultAdd, rowsA, colsA);

        cout << "A - B:" << endl;
        displayMatrix(resultSubtract, rowsA, colsA);

        cout << "A * B:" << endl;
        displayMatrix(resultMultiply, rowsA, colsB);

        cout << "Transpose of A:" << endl;
        displayMatrix(resultTransposeA, colsA, rowsA);

        cout << "Transpose of B:" << endl;
        displayMatrix(resultTransposeB, colsB, rowsB);
    }

    return 0;
}
