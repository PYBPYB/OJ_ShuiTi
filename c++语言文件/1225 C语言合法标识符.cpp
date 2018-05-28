#include<iostream>
using namespace std;

/*
*这么写有毛病，，不合格的字符太多 ，不能用排除法了
int str_c(string str)
{
    if(str[0]<'A' || str[0]>'z' || (str[0]>'Z' && str[0]<'a'))return 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]<'0')         //怎么可能就只是空格
            return 0;
    }
    return 1;
}
*/

int main()
{
    int n;
    cin>>n;

    string P;      //消除每一行开始的\0，
    getline(cin,P);

    while(n--)
    {
        string str;
        getline(cin,str);
        bool flag = 1;

        if((str[0]>='a'&&str[0]<='z') || (str[0]>='A'&&str[0]<='Z'))
        {
            for(int i=1; i<str.length(); i++)
            {
                if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') ||
                        (str[i]>='0'&&str[i]<='9') || str[i]=='_');
                else
                {
                    flag = 0;    //先执行这一步，再break
                    break;
                }
            }
        }
        else flag = 0;
        if(flag == 1)cout<<"yes"<<endl;
        else  cout<<"no"<<endl;
    }
    return 0;
}

