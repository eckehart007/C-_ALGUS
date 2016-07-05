#include <iostream>
#include <stdio.h>
#include "TestClass.h"

using namespace std;

#define SECTOR_SIZE 4096

int main()
{
    TestClass myClass(SECTOR_SIZE);
    printf("Hello world!\r\n");
    printf("%d\r\n",myClass.GetSectorSize());
    return 0;
}
