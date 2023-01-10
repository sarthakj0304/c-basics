#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class complex
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata(complex o1, complex o2)
    {
        a = o1.a + o2.a;//a3.a mai store hogi ye value kyuki hum a3 se call kar rahe hai 
        b = o1.b + o2.b;
    }
    void print()
    {
        cout << a << "+" << b << "i" << endl;//hum yaha a3 ki values display kar rahe hai
    }
}; int main()
{
    complex a1, a2;
    a1.getdata(9, 6);
    a2.getdata(7, 8);
    complex a3;
    a3.getdata(a1, a2);
    a3.print();
    return 0;
}