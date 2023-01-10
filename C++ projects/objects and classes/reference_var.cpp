#include <iostream>
#include <iomanip>
using namespace std;
int update(int &a)//taking the reference of the variable and thus updating the value
{
    a=6;
    return a;
}
int main()
{
    int a=5;
    cout<<a<<endl;
    update(a);
    cout<<a<<endl;
    return 0;
}