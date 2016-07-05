#include <iostream>

using namespace std;

int volume(int l=1, int w=1, int h=1);

int main()
{
    int age = 21;

    switch(age) {
        case 1:
            cout << "16" << endl;
            break;
        case 21:
            cout << "21" << endl;
            break;
        default:
            cout << "failed" << endl;
            //break;

    }

    cout << volume(5,6) << endl;
    return 0;
}

int volume(int l, int w, int h) {
    return l*w*h;
}
