#include<iostream>
using namespace std;

void paixu(int x,int y,int z)
{
    int a[3] = {x,y,z};

    for(int i = 0 ; i < 3;i ++)
     for(int j = 0 ; j < 3 ; j ++)
        for(int k = 0 ; k <3 ; k ++)
     {
         if(i != j && j != k && i != k)
         cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
     }
 //    cout<<endl;
}

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        paixu(a,b,c);
        paixu(a,b,d);
        paixu(a,c,d);
        paixu(b,c,d);
    }
    return 0;
}
