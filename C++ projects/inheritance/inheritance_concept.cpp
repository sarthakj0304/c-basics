#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class abc
{
    int a=5;
};
int main()
{
    abc obj;
    cout<<obj.a<<endl;
    return 0;//we cannot acess private members even after creating object of that class outside
}