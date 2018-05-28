#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int Min_mun=0;
        int a[n+1];
        for(int i=0;i<n;i++)cin>>a[i];
        cin>>a[n];

         for(int i=0;i<n;i++){
            if(a[i]<a[n])Min_mun++;
         }
        cout<<Min_mun<<endl;
    }
    return 0;
}
