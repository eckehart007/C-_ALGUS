#include <iostream>

using namespace std;

void printNumber(int x) {
    cout << "INT: " << x << endl;
}

void printNumber(float x) {
    cout << "FLOAT: " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}
