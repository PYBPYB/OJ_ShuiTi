#include<iostream>
using namespace std;

int main()
{
    int a[4][3] = {0};
    int max = a[0][0],m = 0,n = 0;
    for(int i = 0 ; i < 4 ; i ++)
         for(int j = 0 ; j < 3 ; j ++)
         {
             cin>>a[i][j];
             if(a[i][j] >= max)
             {
                 max = a[i][j];
                 m = i;
                 n = j;
             }
         }
         cout<<max <<" "<<m<<" "<<n<<endl;
    return 0;
}
