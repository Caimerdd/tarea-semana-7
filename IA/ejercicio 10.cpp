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

// Function to transpose a matrix
void transposeMatrix(int mat[][10], int res[][10], int row, int col) {
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            res[i][j] = mat[j][i];
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
    int mat[10][10], res[10][10];
    int row, col;

    // Input dimensions of matrix
    cout << "Enter rows and columns for matrix: ";
    cin >> row >> col;

    // Input elements of matrix
    cout << "Enter elements of matrix: " << endl;
    inputMatrix(mat, row, col);

    // Transpose matrix
    transposeMatrix(mat, res, row, col);

    // Display transposed matrix
    cout << "Transposed matrix: " << endl;
    displayMatrix(res, col, row);

    return 0;
}