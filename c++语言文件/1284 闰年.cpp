#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<n;
        if((n%4==0 && n%100 != 0)||(n%400 == 0))cout<<"is a leap year!"<<endl;
        else cout<<" is not a leap year!"<<endl;
    }

    return 0;
}
