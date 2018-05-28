#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;

int Div(int n)
{
    int T=0;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
        T+=i;
        T+=n/i;
        }//cout<<T;
    }
    return T-n;
}

int main()
{
  int n=3000;
  for(int i=10;i<n;i++)
  { //cout<<Div(Div(i))<<endl;;
    if(Div(i)<3000&&i==Div(Div(i))&&i!=Div(i))
    {
    cout<<"("<<i<<","<<Div(i)<<")";
    i=Div(i)+1;
    }
  }
    return 0;
}
