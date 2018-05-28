#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str[1000];
   // getline(cin,str);//长度有问题
    cin.getline(str,1000);
   // cout<<sizeof(str)<<endl;
   //char str[1024];
   // scanf("%[^\n]",&str);
   // getchar();
   //cout<<str<<endl;
    for(int i=0;i<1000;i++)
    {
        if(str[i]=='\0')
            return 0;
        else if(str[i]==' ')
           cout<<endl;
        else if(((str[i]>='a')&&(str[i]<='z'))||((str[i]>='A')&&(str[i]<='Z')))
            cout<<str[i];
    }

    return 0;
}
