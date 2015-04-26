#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ifstream afile("A-small-practice.in",ios::in);
    char a,c[10];
    int b,i;
    for(i=0;i<10;i++)
    {
        c[i]='\0';
    }
    i=0;
    //afile.read((char*)&b,sizeof(int));
    afile.seekg(0L,ios::beg);
//    while(!afile.eof())
//    {
        while(afile.getline(c,10))
        {
//
//            c[i]=a;
//            i++;
//            cout<<a;
//            if(a=='\n')
//            {
//                break;
//            }
        }
        cout<<c;
        stringstream conv;
        conv<<c;
        conv>>b;
        cout<<endl<<b;
        afile.seekg(2L,ios::cur);


//    int pos=afile.tellg();
//    cout<<pos;
    afile.close();
    return 0;
}
