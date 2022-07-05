#include<iostream>
using namespace std;

class complex{
    private:
    float real;
    float img;
    public:
    complex(){
        real=0;
        img=0;
    }
    void input(){
        cout<<"enter the value of img and real part of complex number "<<endl;
        cin>>real;
        cin>>img;
    }
    complex 
};
