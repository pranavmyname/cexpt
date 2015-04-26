#include<iostream>
using namespace std;
int *factor(int a)
{
    static int factor[20];
    int ctr=0;
    for(int i=0;i<a/2;i++)
    {
        if(a%(i+1)==0){
            factor[ctr]=a;
            ctr++;
        }

    }
    return factor;
}
int main()
{
    int a;
    cin>>a;
    int num[100];
    cout<<"Enter Numbers ";
    for(int i=0;i<a;i++);
    cin>>num[a];
    int i=0;
    int *b;
    b=factor(num[0]);
    for(i=0;i<5;i++){
        cout<<*(b+i);
    }
    return(0);
}
