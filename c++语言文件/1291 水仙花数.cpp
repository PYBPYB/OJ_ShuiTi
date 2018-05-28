#include<iostream>
using namespace std;

int main()
{
    int a,b;
     cin>>a>>b;
        int A = 0,B = 0,C = 0;
        for(int i = a ; i <= b ; i++)
        {
            if(i < 1000)
            {
                   A = i/100;
          B = i/10%10;
          C = i%10;
          if(i == A*A*A + B*B*B + C*C*C)
            cout<<i<<endl;
            }

        }
    return 0;
}
