#include<iostream>
using namespace std;

 class stranger
 {
    public:
    stranger()
    {
    cout<<"constructor stranger"<<endl;
    }
    ~stranger()
    {
        cout<<"deconstructor stranger"<<endl;
    }
    void virtual display()
    {
        cout<<"display virtual"<<endl;
    }
 };
class man: public stranger
{
    public:
    man()
    {
        cout<<"constructor man"<<endl;
    }
    ~man()
    {
        cout<<"deconstructor man"<<endl;
    }

};
int main()
{
stranger *s;
s=new man;
s -> display();
delete s;

}
