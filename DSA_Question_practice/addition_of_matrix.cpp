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

void displayMatrix(int matrix[][100], int rows, int cols) {
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    int matrixA[100][100];
    int matrixB[100][100];
    int resultMatrix[100][100];

    cout << "For Matrix A" << endl;
    inputMatrix(matrixA, rows, cols);

    cout << "For Matrix B" << endl;
    inputMatrix(matrixB, rows, cols);

    addMatrices(matrixA, matrixB, resultMatrix, rows, cols);
    displayMatrix(resultMatrix, rows, cols);

    return 0;
}
