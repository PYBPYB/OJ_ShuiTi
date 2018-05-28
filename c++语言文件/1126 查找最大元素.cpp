#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    while(cin>>str)
    {
       char str_max = str[0];
        for(int i=1;i<str.length();i++)
        {
            if(str[i]>=str_max)
            str_max=str[i];
        }
         for(int i=0;i<str.length();i++)
         {
             if(str[i] == str_max)
                cout<<str[i]<<"(max)";
             else cout<<str[i];
         }
         cout<<endl;
    }

    return 0;
}
