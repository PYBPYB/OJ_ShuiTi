#include<iostream>
#include<string>
using namespace std;

int main()
{
    string stra,strb;
    int c;
    cin>>stra>>strb>>c;
    if(c == ((stra[stra.length()-1] - '0') + (strb[strb.length()-1] - '0'))%10)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
