#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int T=a;
        if(a==0 && b==0)return 0;

        while(--b)     //ע��--b��b--�����𣡣�
        {
            a *= T;
            a %= 1000;
        }
        cout<<a<<endl;
    }
    return 0;
}
