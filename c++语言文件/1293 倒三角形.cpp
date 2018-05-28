#include<iostream>
#include<iomanip>
using namespace std;

void dao_san_jiao(int n)
{
        for(int i=n; i>=1; i--)
        {
             for(int j=n-i; j>=1; j--)
            {
                cout<<" ";
            }

            for(int j=1; j<=2*i-1; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
}

int main()
{
    int n;
    while(cin>>n)
    {
       dao_san_jiao(n);
    }

    return 0;
}


