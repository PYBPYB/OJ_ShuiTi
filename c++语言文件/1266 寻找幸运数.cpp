#include<iostream>
using namespace std;

int main()
{
    int A1,A2,A3;
    while(cin>>A1>>A2>>A3)
    {
             if(A1==-1&&A2==-1&&A3==-1)break;
             if(A1<=168)cout<<"CRASH "<<A1<<endl;
        else if(A2<=168)cout<<"CRASH "<<A2<<endl;
        else if(A3<=168)cout<<"CRASH "<<A3<<endl;
        else cout<<"NO CRASH"<<endl;
    }
    return 0;
}
