#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    while(1==scanf("%d",&n))
    {
       //cin>>n;
        int Left=0,Right=1;
        if(n==1)cout<<1;
       else if(n==2)cout<<1<<" "<<1;
        else  for(int i=0; i<n; i++)
               {

                if(i<n-1)cout<<Right<<" ";
                else cout<<Right;
                int T=Right;
                Right=Left+Right;
                Left=T;
               }
        }
    return 0;
}

