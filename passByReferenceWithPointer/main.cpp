#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int * x);

int main()
{
    int betty = 13;
    int sandy = 13;

    passByValue(betty); // passes in variable betty value
    passByReference(&sandy); //passes in variable sandy address

    cout << betty << endl;
    cout << sandy << endl;
}

void passByValue(int x) {
    x = 99;
}

void passByReference(int * x) {
    *x = 66;
}
