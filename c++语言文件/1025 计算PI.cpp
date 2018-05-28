#include<iostream>
#include<math.h>
using namespace std;
double mun(int m)
{
   double n = 0;
   for(int i = 1;i <= m*10000;i ++)
   {
      n+=1.0/(i*i);
   }
   cout<<endl;
   return n;
}

int main()
{
    int m;
    while(cin >> m)
    {
    double PI;
    PI = sqrt(6.0 * mun(m));
    cout << PI << endl;
    }

    return 0;
}
