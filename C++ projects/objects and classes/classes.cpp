#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class binary
{
    string s;
    public:
    void read();
    void check();
    void ones_compliment();
    void display();
};
void binary :: read()
{
    cout<<"Enter a number"<<endl;
    cin>>s;
}
void binary :: check()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary number"<<endl;
            exit(0);
        }
    }
    cout<<"Correct binary number"<<endl;
}
void binary :: ones_compliment()
{
    check();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        s.at(i)='0';
    }
}
void binary :: display()
{
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary obj;
    obj.read();
    //obj.check();
    obj.display();
    obj.ones_compliment();
    obj.display();
    return 0;
}