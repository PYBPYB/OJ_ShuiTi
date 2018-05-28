#include<iostream>
#include<algorithm>
using namespace std;

int sxl(int a[],int L)
{
    L--;
    int k = a[1]-a[0];
    for(int i=0; i<L; i++)
    {
        if(a[i+1]-a[i] != k)return 0;
        }
    return 1;
}

int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
        cin>>m;
        if(m==1)cout<<"yes"<<endl;
        else {
              int a[m];
        for(int i=0; i<m; i++)
            cin>>a[i];

        sort(a,a+m);
        if(sxl(a,m)==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        }

    }
    return 0;
}
