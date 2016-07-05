#ifndef TESTCLASS_H
#define TESTCLASS_H


class TestClass
{
    public:
        TestClass(int sector_size);

        int GetSectorSize(void);
    protected:
    private:
        int sector_size_;
};

#endif // TESTCLASS_H
