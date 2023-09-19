#include <iostream>

// Stack gets an area of memory that gets a pre-defined size (approximately 2MB)
// Heap is also somewhat pre-defined in size, but can grow.
// Main difference is how it allocates its memory for us.

// Both:
// - actual location of both are in memory
// - provide ways to store data while running our program. 

struct Vector3 {
    float x, y, z;
};

int main() {
    // int values
    int value = 5;          // stack allocation
    int* hvalue = new int;  // heap allocation
    *hvalue = 5;


    // arrays
    int array[5];               // stack allocation
    int* harray = new int[5];   // heap allocation


    // 
    Vector3 vector;                     // stack allocation of struct
    Vector3* hvector = new Vector3();   // heap allocation of struct
}