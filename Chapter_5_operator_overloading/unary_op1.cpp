//After overloadindg an operator, it can be applied to an object as the same way as it is applied to basic types 
#include<iostream>
using namespace std;

class count{
    private:
    int value;
    public:
    count(){
        value=-5;
    }
    void operator++(){
        value=value+100;

    }
    void display(){
        cout<<"the value in 'value'is:"<<value<<endl;
    }
};
int main(){
    count x;
    x.display();
    ++x;
    x.display();
    return 0;
}