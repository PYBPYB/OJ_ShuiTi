#include<iostream>
using namespace std;
int a[100001]={0};

int csh_a()
{
    for(int i=1;i*i<100001;i++)
    {
        a[i*i]=i;
    }
}

void zj_pfs(int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[n+i]>0)
        {
            cout<<n+i<<endl;
            return;
        }
        if(a[n-i]>0)
        {
            cout<<n-i<<endl;
            return;
        }
    }
}
int main()
{
    csh_a();
    int n;
    while(cin>>n){
        zj_pfs(n);
    }

    return 0;
}

