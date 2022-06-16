#include<iostream>
using namespace std;

class A{
    public:
    void displayA(){
        cout<<"this is the output of class A"<<endl;
    }
};
class B: public virtual A{
    public:
    void displayB(){
        cout<<"this is the outputof class B"<<endl;

}
};
class C: public virtual A{
    public:
    void displayC (){
        cout<<"this is the output of class C"<<endl;
    }
};
class D: public B,public C{
    public:
    void displayD(){
        cout<<"this is the output of class D"<<endl;
    }
};
int main(){
    D d;
    d.displayA();
}