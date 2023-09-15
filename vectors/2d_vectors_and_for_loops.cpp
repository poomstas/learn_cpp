#include <iostream>
#include <vector>

using namespace std;

/* How to loop through 2D vectors */

int main() {
    vector<vector<int>> two_d_vector (5, vector<int> (3, 2));

    for (int row = 0; row < two_d_vector.size(); row++) {
        for (int column = 0; column < two_d_vector[0].size(); column++) {
            cout << two_d_vector[row][column] << " ";
        }
    cout << endl;
    }
}