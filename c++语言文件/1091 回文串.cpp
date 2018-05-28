#include<iostream>
#include<string>
using namespace std;

int main()
{
    int flag = 1;
    string str;
    cin>>str;
    for(int i = 0; i<str.length()/2; i++)
    {
        if(str[i] != str[str.length()-i-1])
           flag = 0;
    }
    if(flag == 0)cout<<"N"<<endl;
    else cout<<"Y"<<endl;
    return 0;
}
