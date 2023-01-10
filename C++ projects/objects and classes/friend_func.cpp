#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// forward declaration
class complex;
class calculator
{
public:
    int sumReal(complex, complex);
    int sumComplex(complex, complex);
};
class complex
{
    int a, b;
    friend int calculator ::sumReal(complex, complex);
    friend int calculator ::sumComplex(complex, complex);
    // or simply friend class calculator

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
};
int calculator ::sumReal(complex o1, complex o2)
{
    return o1.a + o2.a;//acessing private data of complex
}
int calculator ::sumComplex(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex o1, o2;
    o1.getData(5, 6);
    o2.getData(7, 8);
    calculator o3;
    int real = o3.sumReal(o1, o2);
    int comp = o3.sumComplex(o1, o2);
    cout << real << " + " << comp << "i" << endl;
    return 0;
}