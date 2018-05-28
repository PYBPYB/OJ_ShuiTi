#include<iostream>
#include<sstream>
#include<string>

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
        if(str[i] != str[str.length()-i-1])return 0;
    }
    return 1;
}

int sushu(int x)
{
    for(int i = 2 ; i < x; i++)
    {
        if(x%i == 0)return 0;
    }
    return 1;
}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        for(int i = a; i <= b; i++)
        {
            if(huiwen(i) && sushu(i))
                cout<<i<<endl;
        }
    }
    return 0;
}
