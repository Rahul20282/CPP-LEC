#include<iostream>
using namespace std;

class binary{
    private:
    int a,b;
    public:
    binary(){
        a=0;
        b=0;

    }
    binary(int x, int y){
        a=x;
        b=y;

    }
    binary operator + (binary bin){
        binary b1;
        cout<<" the value of b1 a in overloading function:"<<b1.a<<endl;
        cout<<"the value of b1 b in overloading function:"<<b1.b<<endl;
        cout<<"the value of bin a in overloading function:"<<bin.a<<endl;
        cout<<"the value of bin b in overloading function"<<bin.b<<endl;
        //calling object is passed implicitly and second.object is passed through argument
        b1.a = a+bin.a;
        b1.a = b+bin.b;
        return b1;

    }
    void display(){
        cout <<"a is:"<<a<<endl;
        cout<<"b is:"<<b<<endl; 

    }
};
int main(){
binary b1,b2,b3;
b1= binary(10,20);
b2= binary(30,40);
b3=b1=b2;
b1.display();
b2.display();
b3.display();
}