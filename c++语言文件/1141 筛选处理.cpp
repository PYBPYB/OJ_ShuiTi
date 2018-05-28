#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    while(cin>>N)
    {
        if(N == 0)return 0;
        int a[N];
        for(int i = 0;i<N;i++)cin>>a[i];
        sort(a,a+N);

     int mun = 1;

    for(int i = 1; i <N; i++)
        if(a[i] != a[i-1])
        {
            mun++;
        }
    cout<<mun<<endl;


    cout<<a[0];
    for(int i = 1; i < N; i++)
    {
       if(a[i] != a[i-1])
            cout<<" "<<a[i];
    }
    cout<<endl<<endl;

    }
    return 0;
}
