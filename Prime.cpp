#include<iostream>
#include<string.h>
#include<sstream>
#include<ctime>
#include<math.h>
using namespace std;
string& message()
{
    static string a="How you doing ";
    return a;
}
int main()
{
    unsigned long int a=1000000,i,j,ctr=0;
    long long sum=2;
    bool flag=false;
    //cout<<a;
    for(i=3;i<203000;i+=2){
        for(j=3;j<=(int)sqrt(i);j++){
         if(i%j==0){
            flag=true;
            break;
        }
        }
        if(flag==false){
            //cout<<i<<"\t";
            sum=sum+i;
            ctr++;
        }
        flag=false;
    }
    cout<<i<<"\t"<<ctr<<"\t";
    cout<<sum;
}
