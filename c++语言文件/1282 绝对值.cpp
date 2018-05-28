#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    double f;
    while(cin>>f)
    {
        if(f>=0)cout<<fixed<<setprecision(2)<<f<<endl;
        else cout<<fixed<<setprecision(2)<<-f<<endl;
    }
    return 0;
}
