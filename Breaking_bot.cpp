#include<iostream>
using namespace std;
        class node
{
    public:
    unsigned long data;
    node *ad;
    node()
    {
        data=0;
        ad=NULL;
    }
};
int main()
{
    int a=0,b=0,ctr=0,s=0,t=0,n=0;
    char c=0;
    cout<<"Enter left or right turn"<<endl;
    while(c!='q'){
            cin>>c;
        if(c=='r')
            a++;
        if(c=='l'){
            b++;
        }
        ctr++;
        cout<<a<<'\t'<<b<<endl;
    }
    cout<<ctr-1<<endl;
    if(a>b)
             n=a;
    else
        {
             n=b;
            b=a;
            a=n;
        }
    n=a+b;
    while(n>0){
        s=a-n-1;
        t=b-n;
        cout<<s<<t<<endl;
        n--;
        a--;b--;
    }
    return 0;
}
