// multiple inheritence
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class derived : public base1, public base2
{
    public : 
    void show(){
        cout<<"The value of base 1 is "<< base1int<<endl;
        cout<<"The value of base 2 is "<< base2int<<endl;
        cout<<"the sum of these value is "<<base1int + base2int<<endl;

    }
};

int main()
{
    derived sarthak;
    sarthak.set_base1int(100);
    sarthak.set_base2int(50);
    sarthak.show();

    return 0;
}
