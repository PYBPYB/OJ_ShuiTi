#include<iostream>
using namespace std;

int hx_db(int a,int b, int c)
{
    for(int i=10; i<=100; i++)
    {
        if(i%3==a && i%5==b && i%7==c)return i;
    }
    return 0;
}

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(hx_db(a,b,c)==0)cout<<"No answer"<<endl;
        else cout<<hx_db(a,b,c)<<endl;
    }
    return 0;
}
