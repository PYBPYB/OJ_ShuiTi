#include<iostream>
using namespace std;

int shou_fz(int n)          //��n���շ�վ�շѺ����ʣ����Ŀ
{
    return n==0?3:(shou_fz(n-1)-1)*2;
}

int main(){
    int N;
    cin>>N;
    while(N--){
        int a;
            cin>>a;
        cout<<shou_fz(a)<<endl;
    }
    return 0;
}

