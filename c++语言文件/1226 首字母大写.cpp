#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        if(str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] -('a' - 'A');
      //  cout<<str<<endl;
        for(int i = 1; i<str.length(); i++)
        {
            if(str[i] == ' ')str[i+1] = str[i+1] - ('a' - 'A');
        }
       cout<<str<<endl;

    }
    return 0;
}
