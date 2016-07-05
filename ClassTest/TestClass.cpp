#include "TestClass.h"
#include <iostream>

using namespace std;

TestClass::TestClass(int sector_size)
{
    sector_size_ = sector_size;
    cout << "Classis" << endl;
    cout << sector_size_ << endl;
}

int TestClass::GetSectorSize(void)
{
    return sector_size_;
}
