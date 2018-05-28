#include<iostream>
using namespace std;

int main()
{
    string str;
    int MUN=0;
    while(cin>>str)    //还没有发现更好的直接全部输入的函数。。
    {
        int mun=0;
        for(int i=0; i<11; i++)
        {
            if(str[i] == '4')
            {
                mun=0;
                break;
            }
            else if(str[i] == '6' || str[i] == '8')
            {
                mun++;
            }
        }
        if(mun >= 5)
        {
            cout<<str<<endl;
            MUN++;
        }
    }
    cout<<MUN<<endl;
    return 0;
}
