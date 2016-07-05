#include <iostream>

using namespace std;

int main()
{
    int bucky[5] = { 65, 55, 32, 323, 34 };
    cout << bucky << endl;
    cout << bucky[0] << endl;
    int bucky2[9];

    for(int i = 0; i<=8; i++){
        //cout << i << endl;
        bucky2[i] = 99;
        cout << i << " - "<<bucky2[i] << endl;
    }

}
