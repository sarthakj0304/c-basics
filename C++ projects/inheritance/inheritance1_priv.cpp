#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class base
{
    int data1; // not inheretable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void base ::setData()
{
    data1 = 10;
    data2 = 20;
}
int base ::getData1()
{
    return data1;
}
int base ::getData2()
{
    return data2;
}
class derived : private base
{
    int data3;

public:
    void process();
    void display();
};
void derived ::process()
{
    //**********************
    setData(); // calling it inside the function because the function is now private to all methods
    // outside and cannot be accesed by creating an object of this class like we did in the previous case.
    // So we call it directly from here because it is not private for it but to everything else outside.
    data3 = data2 * getData1();
}
void derived ::display()
{
    cout << "Value of data 1 is " << getData1() << endl;
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
    cout << getData1() << endl;
}

int main()
{
    derived der;
    // der.setData();
    der.process();
    der.display();
    return 0;
}
// we cannot acess private members of a class by making objects of that class outside of the class