#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c,d,e,f;
    c = a/10;
    d = a%10;
    e = b/10;
    f = b%10;
    cout<<(c+e)%10*10+(d+f)%10<<endl;

    return 0;
}
