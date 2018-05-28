#include<iostream>
using namespace std;

int quan_wei_ling(string str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != '0')
            return 0;
    }
    return 1;
}

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        string str1,str2;
        cin>>str1>>str2;
        bool flag=0; //str2 里面有str1 里面的字母则为一

        for(int i=0; i<str1.length(); i++)
        {
            for(int j=0; j<str2.length(); j++)
            {
                if(str1[i] == str2[j]){
                    str2[j] = '0';
                    flag=1;
                }

            }
            if(flag==1)str1[i] = '0';

               flag =0;
        }
        if(quan_wei_ling(str2)==1 &&quan_wei_ling(str1)==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
