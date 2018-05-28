#include<iostream>
#include<string>
using namespace std;

int main()
{
    string T;
    while(cin>>T)
    {
        if(T == "EOF")break;
        else
        {
            for(int i = 0;i < T.length();i++)
            {
                if(T[i]>='a' && T[i]<='z')T[i]=T[i]-32;
            }
            cout<<T<<endl;
        }

    }
    return 0;
}
