#include <iostream>
using namespace std;

// Function to input matrix elements
void inputMatrix(int mat[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> mat[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[10][10], mat2[10][10], res[10][10];
    int r1, c1, r2, c2;

    // Input dimensions of first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;

    // Input elements of first matrix
    cout << "Enter elements of first matrix: " << endl;
    inputMatrix(mat1, r1, c1);

    // Input dimensions of second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // Check if dimensions are compatible for multiplication
    if (c1 != r2) {
        cout << "Error! Columns of first matrix must be equal to rows of second matrix." << endl;
        return 0;
    }

    // Multiply matrices
    multiplyMatrices(mat1, mat2, res, r1, c1, r2, c2);

    // Display resultant matrix
    cout << "Resultant matrix: " << endl;
    displayMatrix(res, r1, c2);

    return 0;
}
