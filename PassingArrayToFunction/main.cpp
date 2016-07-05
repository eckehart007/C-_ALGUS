#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
    int array2[3] = {1, 2, 3};
    int array4[3] = {55, 66, 3777};
    printArray(array4, 3);
}

void printArray(int theArray[], int sizeOfArray) {
    for(int i = 0; i < sizeOfArray; i++) {
        cout << theArray[i] << endl;
    }
}
