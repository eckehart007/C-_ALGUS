#include <iostream>
using namespace std;

void printSomething() {
    cout << "Inside function" << endl;
}

void printInt(int x) {
    cout << "Print " << x << endl;
}

int addNumbers(int x, int y) {
    return x + y;
}

int main()
{
    printSomething();
    printInt(10);
    cout << addNumbers(1, 2) << endl;
    return 0;
}
