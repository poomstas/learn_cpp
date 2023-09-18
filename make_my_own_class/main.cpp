#include <iostream>
#include <vector>
#include "matrix.h"

using namespace std;

int main() {
    vector<vector<float>> input_matrix(4, vector<float> {1.2, 3.2, 1.3, 2.2});

    Matrix matrix_one = Matrix();
    Matrix matrix_two = Matrix(input_matrix);

    matrix_one.print();
    matrix_two.print();

    cout << "Get matrix_one private variables..." << endl;
    cout << matrix_one.getCols() << endl;
    cout << matrix_one.getRows() << endl;

    cout << "Changing matrix_one grid..." << endl;

    matrix_one.setGrid(input_matrix);
    matrix_one.print();

    cout << "Transposing matrix two..." << endl;
    matrix_two.matrix_transpose().print(); // Method chaining works!

    cout << "==================================================================" << endl;
    cout << "First Matrix" << endl;
    Matrix matrix_one = Matrix();
    cout << "Second Matrix" << endl;
    matrix_two.print();

    cout << "Adding the two matrix..." << endl;
    Matrix matrix_three = matrix_one.matrix_addition(matrix_two);
    matrix_three.print();
    cout << "==================================================================" << endl;

}