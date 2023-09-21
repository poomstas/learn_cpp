#include <iostream>
#include <string>
#include <tuple>

using namespace std;

// Tuple example
std::tuple<std::string, float> multiple_output_function(std::string sentence, float number) {
    sentence = sentence + ".. Hi.";   // Do stuff to the input variables.
    number = number + 1000;           // Do stuff to the input variables.
    std::tuple<std::string, float> return_value (sentence, number); // Define the tuple variable to return.
    return return_value;
};

int main() {
    // Check if the multiple_output_function is working correctly.
    string input_sentence = "This is an example input sentence.";
    float input_number = 1.123;

    cout << "Input String: " << input_sentence << endl;
    cout << "Input Float : " << input_number << endl;
    cout << endl;

    tuple<string, float> output = multiple_output_function(input_sentence, input_number);
    
    // How to access the tuple values using get.
    cout << get<0>(output) << endl;
    cout << get<1>(output) << endl;
    cout << endl;

    // Alternative way to access the tuple values (using std::tie).
    string output_sentence;
    float output_float;

    std::tie(output_sentence, output_float) = multiple_output_function(input_sentence, input_number);

    cout << output_sentence << endl;
    cout << output_float << endl;

}
