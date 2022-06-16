#include<iostream>
using namespace std;

class Rahul{
    public:
    int a=20;
    void display(){
        cout<<"the value of a"<<endl;

    }
};
class Kumar{
    public:
    int b=15;
    void display(){
        cout<<"the valueof b"<<endl;
    }
};
int main(){
Rahul R;
Kumar K;
cout<<"the value of sum is:"<<R+K<<endl;
}

