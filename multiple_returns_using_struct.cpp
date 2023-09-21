#include <iostream>
#include <vector>

using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////
// See a newer way of dealing with multiple returns 
//    - multiple_returns_using_tuples.cpp
//    - multiple_returns_using_pair.cpp
//    - multiple_returns_using_structured_bindings.cpp
/////////////////////////////////////////////////////////////////////////////////////////////

// C++ does not by default return multiple items.
// Here's how to work around that limitation -> return a struct

// Simple Structure
struct {
    int integer;
    std::string string_output;
} myStructure;

// Named Structure
struct MultipleReturns {
    std::string StringOutput;
    float FloatOutput;
};

// Function Definition
MultipleReturns function_name(std::string sentence, float number) {
    MultipleReturns output;
    output.StringOutput = sentence + "..."; // Add new string at the end
    output.FloatOutput = number + 0.0001;
    return output;
}

int main() {
    // Simple structure
    myStructure.integer = 1;
    myStructure.string_output = "String output to a simple structure";

    // Named structure
    MultipleReturns return_item; // Define named structure
    return_item.StringOutput = "This is a stored string";
    return_item.FloatOutput = 0.123;
    cout << return_item.StringOutput << endl;
    cout << return_item.FloatOutput << endl;
    cout << endl;

    // Use Function to return multiple outputs (and print results)
    std::string input_string = "This is an example sentence";
    float input_number = 0.123;
    MultipleReturns out = function_name(input_string, input_number);
    cout << out.StringOutput << endl;
    cout << out.FloatOutput << endl;
}