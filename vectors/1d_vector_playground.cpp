#include <iostream>
#include <vector>

using namespace std;

int piecewise_difference(vector<int> one, vector<int> two); // function declaration

int main() {
    vector<int> vector_one = {5, 10, 27};
    vector<int> vector_two = {3, 17, 12};

    for(int i=0; i < vector_one.size(); i++){
        cout << vector_one[i] - vector_two[i] << endl;
    }

    // piecewise_difference(vector_one, vector_two);

    return 0;
}

int piecewise_difference(vector<int> one, vector<int> two){
    int one_size = one.size();
    int two_size = two.size();

    if (one_size != two_size){
        cout << "Two vector lengths must match." << endl;
        return 0;
    }

    for (int i=0; i < one_size; i++){
        cout << one[i] - two[i] << endl;
    }
    
    return 0;
}
