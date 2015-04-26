#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0,k=0;
    long sum=0;
    for(i=0;i<1000;i+=3){
        sum=sum+i;
        j+=5;
        if(j<1000){
           // if(j%3!=0)
            sum=sum+j;
        }
        if(k<1000){
            sum=sum-k;
            k+=15;
        }
    }
    cout<<sum;
}
