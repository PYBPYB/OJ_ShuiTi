#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,s;
    while(getline(cin,str) && getline(cin,s))
    {
        int mun = 0;
        for(int i = 0; i <= str.length()-s.length(); i++) //等于号很重要
        {
            string st(str,i,s.length());// 将字符串str由i位置起始且长度为s.length()的部分最为st的初值，如果s.length()大于最大长度，则只截取字符串最大长度
            if(st == s)
            {
                mun++;
                i += s.length() - 1;
            }
        }
        cout<<mun<<endl;
    }
    return 0;
}
