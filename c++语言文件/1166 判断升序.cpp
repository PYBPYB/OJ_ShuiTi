#include<iostream>
using namespace std;

int main()
{
    int n,T;
    cin>>T;
    bool flag=1;
    while(cin>>n)
    {
        if(n<T)flag=0;
    }
    if(flag==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;

}
