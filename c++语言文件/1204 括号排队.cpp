#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int flag = 0;
        string str;
        cin>>str;


        if(str.length()%2 != 0)flag=-9999;
        else
            for(int i = 0; i < str.length(); i++)
            {
                for(int j = i + 1; j < str.length(); j += 2)
                {
                    if((str[i] == '(' && str[j] == ')') || (str[i] == '[' && str[j] == ']'))
                    {
                       str[i] = '*';
                       str[j] = '*';
                    }
                }
            }

            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] == '*')flag ++;
            }
     cout<<flag<<endl;
  if(flag == str.length())cout<<"Yes"<<endl;
  else cout<<"No"<<endl;


    }
    return 0;
}
