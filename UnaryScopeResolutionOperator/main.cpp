#include <iostream>

using namespace std;

int tuna = 34;

void myFun() {
    int tuna = 20;
    cout << ::tuna << endl; //use global tuna
}

int main()
{
    //int tuna = 69;
    cout << tuna << endl;
    myFun();
    return 0;
}
