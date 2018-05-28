#include<iostream>
using namespace std;
int lou_ti(int m)
{
    if(m==1)return 1;
    if(m==2)return 2;
    else return lou_ti(m-1)+lou_ti(m-2);
}

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int M;
        cin>>M;
        cout<<lou_ti(M-1)<<endl;
    }
    return 0;
}
