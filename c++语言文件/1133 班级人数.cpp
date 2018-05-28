#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float P=0,Q=0;
    while(scanf("%f%f",&P,&Q)==2)
    {
        //  cin>>P>>Q;
        int i=0,j=1;
        int flag=1;
        while(flag)
        {
            double s=100.0*i/j;
            if(s>Q)j++;
            else if(s<P)i++;
            else
            {
                cout<<j<<endl;
                flag=0;
            }
        }
    }
    return 0;
}


