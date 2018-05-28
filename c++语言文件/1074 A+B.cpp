#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int AB[6];
        cin>>AB[0]>>AB[1]>>AB[2]>>AB[3]>>AB[4]>>AB[5];
            for(int j = 2 ; j >= 1 ; j --)
            {
                if(AB[j] + AB[j+3] > 59)
                {
                    AB[j] = (AB[j] + AB[j+3]) % 60 ;
                    AB[j-1] += 1 ;
                }
                else AB[j] = (AB[j] + AB[j+3]);
            }
            AB[0] = AB[0] + AB[3];
         for(int j = 0 ; j < 2 ; j ++)
         {
             cout<<AB[j]<<" ";
         }
         cout<<AB[2]<<endl;
    }
    return 0;
}
