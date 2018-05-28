#include<iostream>
#include<iterator>
using namespace std;

int main()
{
   int a,n,k;
   while(cin>>a>>n)
   {
       long long s = 0;
       k = a;
       while(n--)
       {
           s+=a;
           a=a*10+k;
       }
       cout<<s<<endl;
   }
    return 0;
}

