#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class c
{
    int a;

public:
    c() {}
    ~c()
    {
        cout << "destructor has been called " << endl;
    }
    c(int data)
    {
        a = data;
    }
    c(c &obj)
    {
        cout << "Copy constructor has been called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << a << endl;
    }
};
int main()
{
    c a1(5);
    a1.display();
    c a3(a1); // copy constructor must pass its first argument by reference
    a3.display();
    return 0;
    {
        cout << "Entering the brackets" << endl;
        c a2; // default constructor which i have made a destructor has been called
        cout << "Exiting the brackets" << endl;
    } // these brackets destroy everything in them after the code in them have been completed
    // so the destructor have been called which destructs the a2 object
}