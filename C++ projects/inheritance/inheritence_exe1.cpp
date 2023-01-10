#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    int a, b;
    float result;

public:
    void setData1()
    {
        cout << "Enter 2 numbers for simple calculator " << endl;
        cin >> a >> b;
    }
    void add()
    {
        result = a + b;
    }

    void subtract()
    {
        result = a - b;
    }

    void multiply()
    {
        result = a * b;
    }

    void divide()
    {
        result = (float)a / b;
    }
    void display1()
    {
        cout << "result of simple calculator is " << result << endl;
    }
};
class ScientificCalculator
{
    int a, b;
    float result;

public:
    void setData2()
    {
        cout << "Enter 2 numbers for scientific calculator" << endl;
        cin >> a >> b;
    }
    void powerOf()
    {
        result = pow(a, b);
    }
    void square1()
    {
        result = a * a;
    }
    void cube()
    {
        result = pow(a, 3);
    }
    void display2()
    {
        cout << "Result of scienctific calculator is " << result << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void set()
    {
        setData1();
        setData2();
    }
    void process()
    {
        cout << "Choose operation to be done in simple calculator" << endl;
        char c;
        cin >> c;
        if (c == '+')
            add();
        else if (c == '-')
            subtract();
        else if (c == '*')
            multiply();
        else if (c == '/')
            divide();
        cout << "Choose operation to be done in scientific calculator" << endl;
        char c2;
        cin >> c2;
        if (c2 == 'p')
            powerOf();
        else if (c2 == 's')
            square1();
        else if (c2 == 'c')
            cube();
    }
    void display()
    {
        display1();
        display2();
    }
};
int main()
{
    HybridCalculator obj;
    obj.set();
    obj.process();
    obj.display();
    return 0;
}