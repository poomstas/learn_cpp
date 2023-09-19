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
}
