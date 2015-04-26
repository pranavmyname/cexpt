#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
      int T,a[100000],N,sumc,sumn,bestsum;
      cin>>T;
      for (int i=0;i<T;i++){
	    cin>>N;
	    sumc=0;
	    sumn=0;
	    bestsum=-999999;
	    for(int j=0;j<N;j++){
		  cin>>a[j];
		  sumc+=a[j];
		  if(a[j]>0) {
			sumn+=a[j];	
		  }
		  else if (sumc<0 and bestsum>0) sumc=0;
		  if(sumc>bestsum){
			bestsum=sumc;
		  }
	    }
	    if(bestsum<0) sumn=bestsum;
	    cout<<bestsum<<" "<<sumn<<endl;
      }
      return 0;
}
