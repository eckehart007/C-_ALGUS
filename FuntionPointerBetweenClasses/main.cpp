#include <iostream>
#include <stdio.h>

using namespace std;

class Master
{
public:
    Master()  {
        //printf("@Master\r\n");
    }

    void callback() {
        printf("@Callback\r\n");
    }

private:

};

class Slave
{
public:
    Slave()  {
        printf("@Slave\r\n");
    }
    Slave(void (*foo)(char *))  {
        printf("@Slave2\r\n");
        foo("Hi Func\r\n");
    }
    Slave(void (Master::*xoo)(void))  {
        printf("@Slave with FP callcack!!\r\n");
        _xoo = xoo();
    }


private:
    void (*foo)(char *);
    //void (Master::*xoo)(void) = &Master::callback;
    void (Master::*_xoo)(void);
};

void my_func(char * s)
{
    printf("%s\r\n", s);
}

int main()
{
    //cout << "Hello world!" << endl;
    //Slave slave;
    //Slave slave2(my_func);
    Master master;
    Slave slave3(master.callback);

    //Master * p_master = &master;
    //p_master->callback();
    //slave.callback();
    //my_func("-----------------------------");
    //void (*foo)(char *) = &my_func;
    //foo = &my_func;
    //foo("Function pointer1\r\n");
    //my_func("-----------------------------");
    //void (*xoo)(void) = p_master->callback();
    //xoo();

    return 0;
}
