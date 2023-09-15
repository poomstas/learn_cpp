#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> two_d_vector;       // Initialize 2D vector
    vector<int> single_row(3,2);            // Set up a row (length 3, values 2)

    /* Alternative Initialization - One-liner equivalent
    vector < vector <int> > twodvector (5, vector <int> (3, 2));

    vector < vector <int> > twodvector (5, {2, 2, 2});
    */
    
    // Append five rows
    for (int i=0; i<5; i++){
        two_d_vector.push_back(single_row);
    }

    // Print out the matrix
    for (int row=0; row < two_d_vector.size(); row++){
        for (int col=0; col < two_d_vector[0].size(); col++){
            cout << two_d_vector[row][col] << "\t";
        }
        cout << endl;
    }
    return 0;
}