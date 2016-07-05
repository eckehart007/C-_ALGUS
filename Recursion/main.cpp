#include <iostream>

using namespace std;

int i = 0;
void bucky() {
    i++;
    if (i > 10) {
        return;
    }
    cout << "TEST: " << i << endl;
    bucky();
}

int factorialFinder(int x) {
    if(x == 1) {
        return 1;
    } else {
        return x*factorialFinder(x-1);
    }
}

int main()
{
    bucky();
    cout << factorialFinder(5) << endl;
}
