#include <iostream>
using namespace std;

int main()
{
    int fish = 5;
    cout << &fish << endl; // address of variable fish
    cout << fish << endl;

    int * fishpointer;
    fishpointer = &fish;

     cout << fishpointer << endl; //fishpointer value == fish address
     cout << &fishpointer << endl; // fispointer address
     cout << *fishpointer << endl; //fish value

}
