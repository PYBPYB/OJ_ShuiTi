#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        double mun=1.0;
        for(int i=2; i<=n; i++)mun -= 1.0/(i*i);
        cout<<setiosflags(ios::fixed)<<setprecision(6)<<mun;
    }
   return 0;
}

