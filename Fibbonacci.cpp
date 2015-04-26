#include<iostream>
#include<sstream>
using namespace std;
class node
{
    public:
    unsigned long long data;
    node *ad;
    node()
    {
        data=0;
        ad=NULL;
    }
//    node(const node& n1)
//    {
//        data=0;
//        ad=n1.ad;
//    }
};
int main()
{
    node *start,*last,*temp;
    //stringstream conv;
   // conv<<*argv[1];
    unsigned long int a=1;
    unsigned long long sum=0;
    double ratio1=float(5/3);
    start=new node;
    last=new node;
    start->data=1;
    unsigned long int i=100;
    //cout<<"Enter the number of terms of series you want ";
    //cout<<i<<endl;
    start->ad=last;
    last->data=1;
   // cout<<ratio1<<endl;
    for(unsigned long j=0;j<i;j++)
    {
        temp=new node;
        last->ad=temp;
        //cout<<temp->data<<"\t";
        temp->data=a+last->data;
        if((j+2)%3==0)
        {
        sum=sum+last->data;
        }
        cout<<last->data<<"\t";

//        if(j==i-1){
//            ratio1=(float(last->data)/float(a));
//            //cout<<last->data<<"\t"<<a<<"\t"<<ratio1<<endl;
//        }
        a=last->data;
        last=temp;
        if(last->data>4000000)
            break;
    }
    cout<<endl<<sum;
    //cout<<endl<<"Golden ratio = "<<ratio1;
    return 0;
}
