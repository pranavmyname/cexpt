#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void pri(int *s)
{
    cout<<*(s+1);
}
int main()
{
      vector<int> a,*b;
      a.push_back(2);
      a.push_back(3);
      int i=1;
    b=a.data();
      cout<<a[1];
}
