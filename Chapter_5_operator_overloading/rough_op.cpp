#include<iostream>
using namespace std;

class Rough{
    public:
    int a=1;
};
void main(){
    Rough r1;
    cout<<"primitive type increment "<<r1.a++<<endl;
    cout<<"user deefined type increment"<<r1++<<endl;//error:
}