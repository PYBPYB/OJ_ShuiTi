#include<iostream>
using namespace std;

int ftg(int a,int b,int c,int d){
    for(int i=0;; i++)
    {
        if(i%a==b && i%c==d)return i;
    }
}

int main()
{
    int a1,b1,a2,b2;
    while(cin>>a1>>b1>>a2>>b2){
        cout<<ftg(a1,b1,a2,b2)<<endl;
    }
    return 0;
}
