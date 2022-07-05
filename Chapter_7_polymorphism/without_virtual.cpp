#include<iostream>
using namespace std;

class shape {
    protected:
    int width, breadth;
    public:
    shape(int a=0, int   b=0)
    {
       width=a;
       breadth=b;
    }
    void print(){
        int area;
        cout<<"shape area is:"<<area<<endl;
        
    }
};
class rectangle:public shape{
    protected:
    int width,breadth;
    public:
    rectangle(int a,int b){
        width=a;
        breadth=b;
    }
    void print(){
        cout<<"area of triangle is="<<(width*breadth)<<endl;

    }
};
class triangle: public shape{
    protected:
    int width,breadth;
    public:
    triangle(int a, int b)
    {
        width=a;
        breadth=b;
    }
    void print(){
        cout<<"area of triangle is:"<<(1/2)*(width*breadth)<<endl;
    }
};

    int main(){
        shape *shape;
        rectangle rec(10,7);
        triangle tri(10,5);
        //store the address of triangle
        shape=&rec;
        //call rectangle area
        shape -> print();
        //store address of triangle
        shape=&tri;
        //call triangle area
        shape -> print();
        return 0;

    }


