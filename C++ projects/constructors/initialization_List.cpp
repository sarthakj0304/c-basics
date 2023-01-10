#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class test
{
    int a,b;
    public:
    test(int i, int j): a(i), b(a+j)// a is initialized first so it will have to be written first
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
int main()
{
    test t(5,6);
    return 0;
}