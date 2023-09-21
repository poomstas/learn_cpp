#include <iostream>
#include <utility>

using namespace std;

// Pair example
std::pair<std::string, float> multiple_output_function(std::string sentence, float number) {
    std::pair<std::string, float> return_value (sentence, number); // Define the pair variable to return.

    // Alternatively, you can 
    return return_value;
};

int main() {
    // Check if the multiple_output_function is working correctly.
    string input_sentence = "This is an example input sentence.";
    float input_number = 1.123;

    cout << "Input String: " << input_sentence << endl;
    cout << "Input Float : " << input_number << endl;
    cout << endl;

    pair<string, float> output = multiple_output_function(input_sentence, input_number);
    
    // How to access the pair values.
    cout << output.first << endl;
    cout << output.second << endl;
}
