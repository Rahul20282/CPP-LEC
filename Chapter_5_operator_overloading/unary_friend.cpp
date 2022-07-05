#include<iostream>
using namespace std;

class unaryfriend{
private:
int a,b,c;
public:
unaryfriend(){
    a=10;
    b=20;
    c=25;
}
void display(){
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
}
void friend operator-(unaryfriend u){
    u.a=-u.a;
    u.b=-u.b;
    u.c=-u.c;

}
};
int main(){
    unaryfriend u1,u2;
    cout<<"Before overloading:"<<endl;
    u1.display();
    -u1;

    cout<<"After overloading:"<<endl;
    u2.display();
    //u2=-u1;//error:no operator"="matches these operands

}