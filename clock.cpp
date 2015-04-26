#include<iostream>
#include<string.h>
#include<conio.h>
#include<ctime>
using namespace std;
static int sum=0;
class test
{
public:
    string name;
    int id;
    void print() const;
    void print();
    void accept();
    test();
};
test::test()
{
    name="Chho";
    id=64;
}
void test:: accept()
{
    cout<<"Enter name ";
    cin>>name;
    cout<<endl<<"Enter id ";
    cin>>id;
}
void test:: print() const
{
    cout<<endl<<"for consant User name and id is "<<name<<"\t"<<id;
}
void test:: print()
{
    cout<<endl<<"User name and id is "<<name<<"\t"<<id;
}
void swap(float& a,float &b)
{
    float c;
    c=a;a=b;b=c;
}
int &add(int a,int b)
{

    return sum=a+b;
}
time_t ti=time(0);
void prtime()
{
    time_t ti=time(0);
    char *a;
    a=ctime(&ti);
    cout<<a;
}
void prutm()
{
    tm *tmr=localtime(&ti);
    cout<<tmr->tm_wday<<"\t"<<1900+(*tmr).tm_year<<"  "<<1+tmr->tm_mon<<"  "<<tmr->tm_mday;
}
int main(int argc, char * argv[])
{
    tm *ltmr=localtime(&ti);
    char *a=NULL;
    clock_t run=clock();
    cout<<run;
    cout<<endl;
    prutm();
    return 0;
}
