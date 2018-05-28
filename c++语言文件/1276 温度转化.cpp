#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float f,c;
    while(cin>>f)
    {
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<5.0*(f-32)/9<<endl;
    }

    return 0;
}
