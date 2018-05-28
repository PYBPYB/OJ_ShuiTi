#include<iostream>
using namespace std;

int Gbs(int a,int b)
{
    int t;
       int x=a;
       int y=b;
        while(b)
        {
            t=a%b;
            a=b;
            b=t;
        }
        return x*y/a;
}

int main()
{
    int n;
    while(cin>>n)
    {
        int a,b;
        n--;
        cin>>a;
        while(n--)
        {
            cin>>b;
            a=Gbs(a,b);
        }
        cout<<a<<endl;
    }

    return 0;
}
