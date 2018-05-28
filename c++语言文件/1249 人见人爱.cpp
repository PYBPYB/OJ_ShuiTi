#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int T=a;
        if(a==0 && b==0)return 0;

        while(--b)     //注意--b和b--的区别！！
        {
            a *= T;
            a %= 1000;
        }
        cout<<a<<endl;
    }
    return 0;
}
