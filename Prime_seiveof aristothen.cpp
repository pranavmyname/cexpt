#include<iostream>
using namespace std;


int main()
{
    bool primes[1000000] = {0};
    unsigned long div;
    unsigned long long sum=2;
    unsigned long i,k,counter=0;
   for(i=1;i<1000000;i++){

        if(primes[i]==0){

                div = (2*i)+1;
                counter++;
                sum=sum+(div);
//                if(div>1900000)
//        cout<<div<<"\t";
            k=2*i*(i+1);
            for(  ; k<1000000; k+=div)
                    primes[k] = 1;
            }
    }
    //sum=142913828922;
    cout<<sum<<"\t"<<counter<<"\t"<<div;
    return 0;
//    const int limit = 1000000;
//    bool sieve[limit] = {0};
//  unsigned long long sum = 2;
//  unsigned long i,k;
//  for(i=1; i<limit; i++)
//  {
//    long num = ((2*i)+1);
//    if(sieve[i] == 0)
//    {
//      sum = sum + num;
//      k = (2*i)*(i+1);
//    for( ;k<limit; k+=num)
//      sieve[k] = 1;
//    }
//  }
//  cout<<sum;
//  return 0;
}

