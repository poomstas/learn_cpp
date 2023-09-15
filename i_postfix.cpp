#include <iostream>

// Show the difference between i++ and ++i
// ++i is postfix. I value is evaluated first, and then 1 is added after.

/*
    int i = 5;
    int x = i++; // x = 5, i = 6 (called postfix)
    int x = ++i; // x = 6, i = 6 (called prefix)
*/

using namespace std;

int main(){
    int i = 0;
    int j = 0;

    cout << "i Before eval:\t" << i << endl;
    int x = i++;
    cout << "x:\t\t" << x << endl;
    cout << "i After eval:\t" << i << endl;

    cout << endl;

    cout << "j Before eval:\t" << j << endl;
    int y = ++j;
    cout << "y:\t\t" << y << endl;
    cout << "j After eval:\t" << j << endl;

    return 0;
}
