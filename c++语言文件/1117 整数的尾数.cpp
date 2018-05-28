#include<iostream>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int flag = 1;
        if(a==0&&b==0)
            return 0;
        for(int i=0; i<99; i++)
        {
            if((a*100+i)%b == 0)
            {
                if(flag==1)
                {
                    flag = 0;
                    if(i<=9)
                        cout<<"0"<<i;
                    else
                        cout<<i;
                }
                else
                {
                    if(i<=9)
                        cout<<" "<<"0"<<i;
                    else
                        cout<<" "<<i;
                }
            }

        }
        cout<<endl;
    }
    return 0;
}
