#include <iostream>
#include <string>
#include <tuple>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////
// Example using structured bindings (C++17 or newer) to handle multiple function returns. //
// g++ multiple_returns_using_structured_bindings.cpp -o main -std=c++17                   //
/////////////////////////////////////////////////////////////////////////////////////////////

tuple<string, int> CreatePerson() { // Returns a tuple outpu
    return {"Brian", 24};
}

int main() {
    // Defining person using auto (for more readability)
   auto [name, age] = CreatePerson(); // Structured bindings!! Very similar to Python. <- make sure the linter version is C++17 or newer.

    cout << "Name: " << name << endl;
    cout << "Age:  " << age << endl;
}
