#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void move()=0;//pure virtual function
};
class dog:public Animal
{
    public:
    void move(){
        cout<<"dog runs fast"<<endl;
    }
};
int main()
{
    Animal *An;
    dog dg;
    An= &dg;
    return 0;
     
}