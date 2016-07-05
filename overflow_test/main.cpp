#include <iostream>
#include <unistd.h>

using namespace std;
uint8_t counter = 0;

int main()
{
    cout << "Hello world!" << endl;
    while(1)
    {
        counter++;
        cout << int(counter) << endl;
        usleep(100000);

    }
    return 0;
}
