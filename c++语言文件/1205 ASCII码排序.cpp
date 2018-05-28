#include<iostream>
#include<algorithm>
using namespace std;

bool paixu(char a,char b)
{
    return a<b;
}

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        char str[3];
        for(int i=0;i<3;i++)cin>>str[i];
        sort(str,str+3,paixu);          //’‚∫Ø ˝’Ê≈£±∆£°£°£°£°
        for(int i=0;i<2;i++)cout<<str[i]<<" ";
        cout<<str[2]<<endl;
    }
    return 0;
}
