#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    int x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        double L = sqrt((x2*1.0-x1)*(x2-x1)+(y2*1.0-y1)*(y2-y1));
        cout<<setiosflags(ios::fixed)<<setprecision(2)<<L<<endl;

    }
    return 0;
}
