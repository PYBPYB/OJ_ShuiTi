#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,s;
    while(getline(cin,str) && getline(cin,s))
    {
        int mun = 0;
        for(int i = 0; i <= str.length()-s.length(); i++) //���ںź���Ҫ
        {
            string st(str,i,s.length());// ���ַ���str��iλ����ʼ�ҳ���Ϊs.length()�Ĳ�����Ϊst�ĳ�ֵ�����s.length()������󳤶ȣ���ֻ��ȡ�ַ�����󳤶�
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
