#include<iostream>
#include<fstream>
using namespace std;
int main(int argv, char * argc[])
{
    char c;
    ofstream afile(argc[1],ios::out);
    cout<<"Enter text in files ";
    while ( c!='.')
    {
        cin.get(c);
        afile<<c;
    }
    afile.close();
    if (argv==3)
    {
        ifstream afile(argc[1],ios::in);
        ofstream nfile(argc[2],ios::out);
        while(afile.eof())
        {
            afile.get(c);
            nfile.put(c);
        }
        nfile<<endl<<"Copied file";
        afile.close();
        nfile.close();
    }

    return 0;
}
