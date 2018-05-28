#include<iostream>
using namespace std;
int k;
int ji_ou_xiangchu(int n)
{
    k++;
    if(n==1)return k;
    return n%2==0?ji_ou_xiangchu(n/2):ji_ou_xiangchu(3*n+1);
}

int main(){
    int n;
    while(cin>>n)
    {
        k=0;
        cout<<ji_ou_xiangchu(n)-1<<endl;
    }
    return 0;
}

