#include<bits/stdc++.h>

using namespace std;
int N;
long long a[20];
void jie_chen(){
    a[0] = 1;
    for(int i=2; i<=20; i++){
        a[i-1] = i*a[i-2];
    }
}
int main(){
     jie_chen();
     int n;
     while(cin>>n){
      long long mun=0;
      for(int i=0; i<n; i++){
        mun += a[i];
      }
      cout<<mun<<endl;
     }
    return 0;
}
