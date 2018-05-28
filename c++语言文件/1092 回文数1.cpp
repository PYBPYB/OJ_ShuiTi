#include<iostream>
#include<sstream>
using namespace std;

string int_to_str( int val )
{
    ostringstream out;
    out<<val;
    return out.str();
}

int huiwen(int x)
{
    string str = int_to_str(x);
    for(int i = 0 ; i < str.length()/2; i++)
    {
        if(str[i] != str[str.length()-i-1])
            return 0;
    }
    return 1;
}

int ni_fan(int X)   /*只能操作10进制*/
{
    int T = 0;
    while(X)
    {
        T *= 10;
        T += X%10;
        X /= 10;
    }
    return T;
}

int sdk(int m)
{
    for(int i=1; i<=8; i++)
        {
            if(huiwen(m) == 1)
            {
                return i-1;
            }
            else m += ni_fan(m);
        }
    return 0;
}

int main()
{

    int L,M;
    cin>>L;
    while(L--){
        cin>>M;
        cout<<sdk(M)<<endl;
    }

    return 0;
}
