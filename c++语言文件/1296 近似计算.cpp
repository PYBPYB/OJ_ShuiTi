#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        double mun = 0;
        int j=0;
        for(int i=1; i<=n; i+=2){
            if(j%2==0)         //不能用i来作判断！！
            {
                 mun = mun + 1.0/i;
                // cout<<setiosflags(ios::fixed)<<setprecision(6)<<mun<<endl;
            }
            else
            {
                mun = mun - 1.0/i;
               // cout<<setiosflags(ios::fixed)<<setprecision(6)<<mun<<endl;
            }
            j++;
        }
        cout<<setiosflags(ios::fixed)<<setprecision(6)<<mun*4<<endl;
    }
    return 0;
}
