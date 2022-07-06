#include<iostream>
using namespace std;

class media
{
    protected:
    char title[25],pub[25];
    public:
    virtual void readdata();
    virtual void showdata();
};
void media :: readdata()
{
    cout<<"enter title=";
    cin>>title;
    cout<<"enter publication=";
    cin>>pub;
}
class book:public media
{
    private:
    int no_of_pages;
    public:
    void readdata();
     void showdata();
};
void book::readdata()
{
    media::readdata();
    cout<<"enter number of pages:";
    cin>>no_of_pages;
}
void book::showdata()
{
    cout<<"***Data on book***"<<endl;
    cout<<"Title of book:"<<title<<endl;
    cout<<"publication of book:"<<pub<<endl;
    cout<<"no. of pages:"<<no_of_pages<<endl;
}
class DVD:public media
{
    private:
    int dur;
    public:
     void readdata();
     void showdata();
    
};
void DVD::readdata()
{
    media::readdata();
    cout<<"enter time duration of DVD:";
    cin>>dur;
}
void DVD::showdata()
{
    cout<<"\n***Data on DVD***"<<endl;
    cout<<"title of DVD:"<<title<<endl;
     cout<<"publication of DVD:"<<pub<<endl;
    cout<<"time of duration of DVD:"<<dur<<endl;
}
int main(){
    media *md;
    book bk;
    md=&bk;
    cout<<"enter data on book"<<endl;
    md->readdata();
    md->showdata();

    DVD dv;
    md=&dv;
    cout<<"enter dta on DVD:"<<endl;
    md->readdata();
    md->showdata();
    return 0;
}

