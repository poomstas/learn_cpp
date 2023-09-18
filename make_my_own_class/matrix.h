#include <iostream>
#include <vector>

using namespace std;

// Header file for the Matrix class

/* 
**  TODO:
**    Declare the following private variables:
**      a 2D float vector variable called grid
**      a vector size_type variable called rows
**      a vector size_type variable called cols
*/

class Matrix {
    private:
        vector<vector<float>> grid; // Initialize 2D float vector "grid"
        vector<float>::size_type rows; // size_type: Holds the size of a vector. rows is the number of rows. See: https://stackoverflow.com/questions/4849632/vectorintsize-type-in-c
        vector<float>::size_type cols;

    public:
        // Constructor functions
        Matrix();
        Matrix(vector<float>, vector<float>);

        // Set functions. Set and get functions are specifically for accessing and assigning values to private variables.

        // Get functions


};
