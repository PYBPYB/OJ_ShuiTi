#include<bits/stdc++.h>

using namespace std;
int mun_nixu(int X)          //Äæ·´intÊý
{
    int T = 0;
    while(X)
    {
        T *= 10;
        T += X%10;
        X /= 10;
    }
    return T;
}
int main()
{
    int n;
    while(cin>>n){
        for(int i=n+1;;i++){
            if(i == mun_nixu(i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
