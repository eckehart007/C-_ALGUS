#include <iostream>

using namespace std;

class myClass {
    public:
        void printCrap() {
            cout << "text" << endl;
        }
};

int main() {
    myClass myObject;
    myObject.printCrap();

    cout << "Hello world!" << endl;
    return 0;
}
