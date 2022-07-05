#include<iostream>
using namespace std;

int main(){
int*pointInt;
float *pointfloat;
pointInt= new int;
pointfloat = new float;
cout<<"Address of pointInt is: "<<pointInt<<endl;
cout<<"Address of pointfloat is: "<<pointfloat<<endl;

*pointInt=45;
*pointfloat=45.45;
cout<<"value of pointint is:"<<*pointInt<<endl;
cout<<"value of pointfloat is:"<<*pointfloat<<endl;
delete pointInt;
delete pointfloat;
}
