#include <iostream>
using namespace std;
class mobile {
    int m = 10;
    public:
    void display(){
        cout<<"m="<<m<<endl;
        cout<<"this->m="<<this->m<<endl;
        cout<<"the address of current object"<<this<<endl;
    }
};
int main(){
    mobile m1,m2;
    m1.display();//m1 kai ho, m2 ko haina
    m2.display();//m2 kai ho, m1 ko haina
    return 0;
}