#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

bool visited[260];
long long int solve(int a[],int b,int c)
{

      long long int r[c+1][b],x,y;
      for(int i=0;i<b;i++) r[0][i]=1;
      for(int i=1;i<=c;i++){
	    r[i][0]=(i-a[0]>=0)?r[i-a[0]][0]:0;
	    for(int j=1;j<b;j++){
		  if(i-a[j]>=0) x=r[i-a[j]][j];
		  else x=0;
		  y=r[i][j-1];
		  r[i][j]=x+y;
	    }
	    //cout<<r[i][b-1]<<endl;
      }
      return r[c][b-1];
}
int main(){
      int M,N,a[260];
      cin>>N;
      cin>>M;
      for(int i=0;i<M;i++){
	    cin>>a[i];
      }
      long long int ans;
      ans=solve(a,M,N);
      cout<<ans<<endl;
}
