#include <iostream>
#include <vector>

using namespace std;

/*
    - Populate a vector with values
    - Do math with vector values
*/

int main() {
    vector<float> example;

    int vector_length = 9;
    
    for (int i = 0; i < vector_length; i++){
        example.push_back(i*5.123);
    }

    for (int i = 0; i < example.size(); i++){
        cout << example[i] << endl;
    }

    return 0;
}