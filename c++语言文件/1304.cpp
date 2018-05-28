#include<iostream>
using namespace std;

int main()
{
    int m;
    while(cin>>m)
    {
        int s = 0;
        for(int i =1 ; i <= m; i++)
        {
            int n = 1;
            for(int j = i ; j > 0; j--)
            {
                n *= j;
            }
            s += n;
        }
        cout<<s<<endl;
    }

    return 0;
}

