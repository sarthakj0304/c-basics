#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
class point;
class calculate
{
public:
    float distance(point, point);
};
class point
{
    int a, b;

public:
    friend float calculate ::distance(point, point);
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << ", " << b << endl;
    }
};
float calculate ::distance(point o1, point o2)
{
    float dist;
    dist = pow(abs(o1.a - o2.a), 2) + pow(abs(o1.b - o2.b), 2);
    dist = sqrt(dist);
    return dist;
}
int main()
{
    point a(70, 0);
    point b(1, 0);
    a.display();
    b.display();
    calculate c;
    float distance = c.distance(a, b);
    cout << "Distance is " << distance << endl;
    return 0;
}
// In C++, we can instantiate the class object with or without using the new keyword. 
// If the new keyword is not use, then it is like normal object. This will be stored at the stack section. 
// This will be destroyed when the scope ends. But for the case when we want to allocate the space for the 
// item dynamically, then we can create pointer of that class, and instantiate using new operator.
