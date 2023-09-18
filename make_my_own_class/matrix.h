#ifndef MATRIX_H
#define MATRIX_H

// #include <iostream>
#include <vector>

using namespace std;

// Header file for the Matrix class

class Matrix {
    private:
        vector<vector<float>> grid; // Initialize 2D float vector "grid"
        vector<float>::size_type rows; // size_type: Holds the size of a vector. rows is the number of rows. See: https://stackoverflow.com/questions/4849632/vectorintsize-type-in-c
        vector<float>::size_type cols;

    public:
        // Constructor functions
        Matrix();
        Matrix(vector<vector<float>>);

        // Set functions. Set and get functions are specifically for accessing and assigning values to private variables.
        void setGrid(vector<vector<float>>);

        // Get functions
        vector<vector<float>> getGrid();
        vector<float>::size_type getCols();
        vector<float>::size_type getRows();

        // Matrix Functions
        Matrix matrix_transpose();
        Matrix matrix_addition(Matrix);
        void print();
};

#endif /* MATRIX_H */