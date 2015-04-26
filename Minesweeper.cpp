#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<math.h>
using namespace std;
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int min(int a, int b)
{
    if(a>b)
    return b;
    else
    return a;
}
int main()
{
    ofstream myfile("outputmine.txt");
    ifstream afile("C-small-attempt8.in",ios::in);
    string sample,imp="Impossible";
    int total=0;
    getline(afile,sample);
    stringstream conv;
    conv<<sample;
    conv>>total;
    //cout<<total;
    int i=0,r,c,m,free,root,ctr=0;
    bool check=true;
    while(i<total)
    {
        ctr=0;
        conv.str("");
        conv.clear();
        getline(afile,sample);
        conv<<sample;
        conv>>r;
        conv>>c;
        conv>>m;
        cout<<r<<" "<<c<<" "<<m<<endl;
        free=r*c-m;
        root=sqrt(m);
        cout<<"root ="<<root<<"frere = "<<free<<endl;
        myfile<<"Case #"<<i+1<<":\n";
        if(c==1 || r==1)
        {
            if(m>max(c,r))
            {
                myfile<<"Impossible";
                myfile<<"\n";
            }
            else
            {
                for(int k=0;k<r;k++)
            {
                for(int j=0;j<c;j++)
                {
                    if(ctr<free)
                    {
                        if(k==0 && j==0)
                        myfile<<"c";
                        else
                        myfile<<".";
                        ctr++;
                    }
                    else
                    myfile<<"*";
                }
                myfile<<endl;
            }
        }
        }
        else if(free<4 && free>1)
        myfile<<"Impossible"<<endl;
        else
        {
            int ctr1=0;
            for(int k=0;k<r;k++)
            {
                for(int j=0;j<c;j++)
                {
                    int compval=sqrt(free);
                    if(ctr<free && max(k,j)<sqrt(free))
                    {
                        cout<<max(k,j);
                        if(k==0 && j==0)
                        myfile<<"c";
                        else
                        myfile<<'.';
                        ctr++;
                    }

                    else if(ctr<free && r<=compval && free>=c+2)
                    {
                        myfile<<".";
                        ctr++;
                        ctr1++;
                    }
                    else if(c<=compval && ctr<free)
                    {
                        myfile<<".";
                        ctr++;
                    }
                    else
                    myfile<<"*";
                }
                myfile<<endl;
            }
        }
        i++;
    }
    return 0;
}
