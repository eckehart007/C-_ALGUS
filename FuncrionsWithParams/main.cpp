#include <iostream>

using namespace std;

void printCrap(int x) {
    cout << "number "  << x << endl;
}

int add(int x, int y) {
    //cout << "number "  << x << endl;
    return (x + y);
}

int main()
{
    printCrap(10);
    cout << add(10, 20) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
