#include<iostream>
#include<string>
using namespace std;

int main()
{
    int M;
    cin>>M;
    while(M--)
    {
         int mun = 0;
         string str;
         cin>>str;
         string s(str,1,str.length());
         for(int i = 0; i<s.length();i++)
         {
             if('0' == s[i])
             {
                 mun++;
             }
             if(s[i] == '0');
               else cout<<s[i];
               if(mun == s.length())cout<<0;
         }
         cout<<endl;
    }
    return 0;
}
