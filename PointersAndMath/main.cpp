#include <iostream>

using namespace std;

int main()
{
    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];

    cout << "bp0: " << bp0 << endl;
    cout << "bp1: " << bp1 << endl;
    cout << "bp2: " << bp2 << endl;

    bp0 += 2; //points to pointer bp2
    cout << "bp0: " << bp0 << endl;
}
