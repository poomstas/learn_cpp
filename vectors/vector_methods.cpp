#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Assign - populate a vector with fixed values. 
    vector<int> intvariable;
    intvariable.assign(10, 16); // Populate the intvariable vector with ten integers all having the value of 16


    // push_back - add an elemenet to the end of the vector.
    vector<int> newvector;
    newvector.push_back(25);
    newvector.push_back(26);

    for (int i = 0; i < newvector.size(); i++){
        cout << newvector[i] << endl;
    }


    // size - returns the size of the vector
    newvector.size();
    cout << "New vector size: " << newvector.size() << endl;

    return 0;
}