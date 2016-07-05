#include <iostream>
#include <string>
#include "MyNewClass.h"
using namespace std;

class MyClass{
    public:
        MyClass(string z) {
            setName(z);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }

        void coolSaying() {
            cout << "Cool saying.." << endl;
        }
    private:
        string name;
    };

int main()
{
    MyClass myClassObject("Egert Pärna");
    //myClassObject.setName("Peeter Aaron");
    cout << myClassObject.getName() << endl;

    MyClass myClassObject2("Kristel Vago");
    //myClassObject.setName("Peeter Aaron");
    cout << myClassObject2.getName() << endl;

    MyNewClass my;

    myClassObject.coolSaying();
    return 0;
}
