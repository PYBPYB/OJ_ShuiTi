#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
        double mun=0.0;
        for(int i=1; i<=n; i++)mun += 1.0/i;
        cout<<setiosflags(ios::fixed)<<setprecision(6)<<mun<<endl;
   return 0;
}
