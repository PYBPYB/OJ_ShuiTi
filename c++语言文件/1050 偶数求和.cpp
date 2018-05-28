#include<iostream>
#include<iomanip>
using namespace std;

int shu_zu(int a[])
{
    a[1]=2;
    for(int i=2; i<101; i++)
        a[i]=a[i-1]+2;
}

int main()
{
    int n,m;
    int a[101];
    shu_zu(a);
    //for(int i=1;i<101;i++)cout<<a[i]<<endl;
    while(cin>>n>>m)
    {
        if(n%m==0){
             cout<<a[1]+(m-1);
            for(int i=m+1; i<=n-n%m; i+=m)
            {
                cout<<" "<<a[i]+(m-1);
            }
        }
        else
        {
            for(int i=1; i<=n-n%m; i+=m)
            {
                cout<<a[i]+(m-1)<<" ";
            }
            cout<<(a[n]+a[n-n%m+1])/2;
        }
        cout<<endl;
    }
    return 0;
}

