#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a[20] = {2,3};
    int b[20] = {1,2};

    for(int i = 2; i <20; i++)
    {
        a[i] = a[i-1] + a[i-2];
        b[i] = b[i-1] + b[i-2];
    }
/*
     for(int i = 0; i <20; i++)
     {
         cout<<a[i]<<"  "<<b[i]<<endl;
     }
*/
   int n;
   while(cin>>n)
   {
      double s = 0.0;
    for(int i = 0; i <n;i++)
    {
        s += (a[i]*1.0)/(b[i]*1.0);
    }
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<s<<endl;
   }

    return 0;
}
