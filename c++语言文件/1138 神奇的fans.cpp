#include<iostream>
#include<algorithm>
using namespace std;

int dc_sl(int a[],int L){
    for(int i=1; i<L-1; i++){
        if(a[i]-a[i-1]!=a[i+1]-a[i])return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int a[m];
        for(int i=0; i<m; i++)cin>>a[i];
        sort(a,a+m);
        if(dc_sl(a,m)==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
