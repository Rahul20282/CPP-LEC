#include<iostream>
using namespace std;

class parent{
    //declaring a protected data member
    protected:
    string id_protected;
};
class child: public parent{
    public:
    void setId(string id){
        id_protected=id;


    }
    void display{
        //member function child(derived class) accessing the protected data
        cout<<"is_protected is:"<<id_protected<<endl;

    }
};
int main(){
    child obj1;
    obj1.setId("LEC077BCT");
    obj1.display();
    return 0;
}