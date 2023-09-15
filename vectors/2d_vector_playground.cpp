#include <iostream>
#include <vector>

using namespace std;

vector<vector<float>> calculate_2d_matrix_sum(vector<vector<float>> matrix_one, vector<vector<float>> matrix_two); // function declaration
int print_2d_matrix(vector<vector<float>> matrix);

int main(){
    vector<vector<float>> first_matrix (5, vector<float> (3, 2));
    vector<vector<float>> second_matrix (5, vector<float> {1, 2, 3});
    vector<vector<float>> matrix_sum = calculate_2d_matrix_sum(first_matrix, second_matrix);

    print_2d_matrix(first_matrix);
    cout << endl;
    print_2d_matrix(second_matrix);
    cout << endl;
    print_2d_matrix(matrix_sum);
    cout << endl;
}

// Define Function calculate_2d_matrix_sum
vector<vector<float>> calculate_2d_matrix_sum(vector<vector<float>> matrix_one, vector<vector<float>> matrix_two){
    int n_rows = matrix_one.size();
    int n_cols = matrix_one[0].size();

    vector<vector<float>> output (n_rows, vector<float> (n_cols, 0));

    for (int row=0; row < matrix_one.size(); row++){
        for (int col=0; col < matrix_one[0].size(); col++){
            output[row][col] = matrix_one[row][col] + matrix_two[row][col];
        }
    }

    return output;
}

// Define Function print_2d_matrix
int print_2d_matrix(vector<vector<float>> matrix){
    for (int row=0; row < matrix.size(); row++){
        for (int col=0; col < matrix[0].size(); col++){
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }
    return 0;
}
