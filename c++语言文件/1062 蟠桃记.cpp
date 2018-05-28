#include<iostream>
using namespace std;
int N_n(int n){
   return n==1?1:(N_n(n-1)+1)*2;
}
int main(){
    int n;
    while(cin>>n){
        cout<<N_n(n)<<endl;
    }
    return 0;
}

