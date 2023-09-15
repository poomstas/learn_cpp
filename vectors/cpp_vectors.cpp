#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<float> myvector (5);
    /* Different ways of initializing a vector:
        std::vector<float> myvector (5);        -> Vector of length 5 without assigning any values
        std::vector<int> myvector (10, 6);      -> Vector of length 10 with values 6 assigned
        std::vector<float> myvector = {5.0, 3.0, 2.7, 8.2, 7.9} -> providing specific values */

    myvector[0] = 5.0;
    myvector[1] = 3.0;
    myvector[2] = 2.7;
    myvector[3] = 8.2;
    myvector[4] = 7.9;

    for (int i = 0; i < myvector.size(); i++) {
        cout << myvector[i] << "\t";
    }

    cout << endl;

    return 0;
}