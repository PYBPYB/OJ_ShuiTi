#include<iostream>
#include<stdio.h>
using namespace std;
void Q(int n)
{
    char a[n][n];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
      {
         if(i==j)printf("X",a[i][j]);
            else if(i+j==n-1)printf("X",a[i][j]);
                 else printf(" ",a[i][j]);
      }
      cout<<endl;
    }
}
void q(int a)
{
    printf("X");
    for(int i=0;i<a-2;i++)printf(" ");
    printf("X\n");
}
int main()
{
    int N,a,b;
    cin>>N;
    while(N--)
    {
        cin>>a>>b;
        for(int i=0;i<b;i++)Q(a);
        q(a);
   if(N>0)cout<<endl;
    }
   return 0;
}
