#include <iostream>
#include <string>

template<typename T>
void print(T value) {
    std::cout << value << std::endl;
}

int main() {
    print(5);
    print("this is string");
    print(5.5f);

    // Specify the function to take in specific types
    print<int>(5);                                  // take in integers
    print<std::string>("specified to be string");   // take in strings
    print<float>(5.5f);                             // take in floats
}
