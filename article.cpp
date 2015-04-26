#include<iostream>
using namespace std;
class activity
{

    public:
    int bday;
    int num;
    string name;
//    activity()
//    {
//        num=0;bday=0;
//    }
    activity(int e=0)
    {
        num=e;
    }
//   activity(int a=0,int b=0)
//   {
//       num=a;
//       bday=b;
//   }
    activity operator+(activity something)
   {
       activity temp;
       temp.num=num+something.num;
       return temp;
   }

//    activity(string a)
//    {
//        name=a;
//    }

};
int main()
{
    activity a(1),b(3),c;
   //a.num=5;b.num=3;
    c=a+b;
    c=c+5;
    cout<<c.num;
    return 0;
}
