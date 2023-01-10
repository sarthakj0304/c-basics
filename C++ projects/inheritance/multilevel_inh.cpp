//multilevel inheretence own example 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class grandfather
{
    protected: 
    int b=5;
    public: 
    int c=6;
};
class father: grandfather//private inheretnce. b and c become private and cannot be accesed outside of here
// or inhereted. if we put public here no errors.
{
    public:
    void display()
    {
    cout<<"B is "<<b<<endl;
    cout<<"C is "<<c<<endl;}

};
class son: public father
{
    public:
    void display()
    {
        cout<<"B is "<<b<<endl;
        cout<<"C is "<<c<<endl;
    }
};
int main()
{
    father obj1;
    obj1.display();
    //cout<<"calling b from outside the function"<<obj.b<<endl;//will throw an error because b is protected
    //and protected variables after public inheritance are still protected. 
    cout <<"calling c from outside the function "<<obj1.c<<endl;//will not throw an error if 
    //inheretence is public 
    son obj2;
    obj2.display();
    return 0; 
}