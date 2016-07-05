#include <iostream>

using namespace std;

int main()
{
    double c;
    cout << sizeof(c) << endl;

    double bucky[10];
    cout << sizeof(bucky) << endl;
    cout << sizeof(bucky) / sizeof(bucky[0]) << endl;
}
