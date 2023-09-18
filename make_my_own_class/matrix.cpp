#include <vector>
#include <stdexcept>
#include <iostream>
#include "matrix.h"

using namespace std;

// Constructor functions
Matrix::Matrix() { // Initialize the grid variable to a default value such as a 4x4 matrix w/ all zeros.
    rows = 4;
    cols = 4;
    vector<vector<float>> initial_grid(rows, vector<float> (cols, 1));
    grid = initial_grid;
}

Matrix::Matrix(vector<vector<float>> initial_grid) {
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

// Set Functions
void Matrix::setGrid(vector<vector<float>> initial_grid) {
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}

// Get Functions
vector<vector<float>> Matrix::getGrid() {
    return grid;
}

vector<float>::size_type Matrix::getCols() {
    return cols;
}

vector<float>::size_type Matrix::getRows() {
    return rows;
}

// Matrix Functions
Matrix Matrix::matrix_transpose() {
    vector<vector<float>> transposed(cols, vector<float> (rows, 0));
    for (int i=0; i < rows; i++) {
        for (int j=0; j < cols; j++) {
            transposed[j][i] = grid[i][j];
        }
    }
    return Matrix(transposed);
}

Matrix Matrix::matrix_addition(Matrix new_matrix) {
    if (rows != new_matrix.getRows() || cols != new_matrix.getCols()) {
        throw invalid_argument("Matrix dimensions must match.");
    }

    vector<vector<float>> new_matrix_grid = new_matrix.getGrid();
    vector<vector<float>> result(rows, vector<float> (cols, 0));

    for (int i=0; i < rows; i++) {
        for (int j=0; j < cols; j++){
            result[i][j] = grid[i][j] + new_matrix_grid[i][j];
        }
    }
    cout << "Matrix successfully added." << endl;
    return Matrix(result);
}

void Matrix::print() {
    cout << endl;
    for (int i=0; i < rows; i++) {
        for (int j=0; j < cols; j++) {
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
