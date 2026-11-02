//C-1

// #include <iostream>
// using namespace std;
// int x = 10; // Global variable
//
// int main() {
//     cout << x << endl;
//     int x = 80; // Local variable
//     cout << x << endl;
// }

//C-2

#include <iostream>
using namespace std;
int x = 10; // Global variable

void change() {
    x = 45;
}

int main() {
    int x = 80; // Local variable
    cout << x << endl;
    change();
    cout << x << endl;
}