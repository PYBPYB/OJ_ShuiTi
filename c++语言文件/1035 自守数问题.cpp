#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long MUN;
    cout<<0;
    for(int i = 1; i<= 9; i++){
       // zishoushu(i,1);
       if((i*i)%10 == i)cout<<"  "<<i;

    }
    for(int i = 10; i<= 99; i++){
       // zishoushu(i,2);
       if((i*i)%100 == i)cout<<"  "<<i;
    }
    for(int i = 100; i<= 999; i++){
       // zishoushu(i,3);
       if((i*i)%1000 == i)cout<<"  "<<i;
    }
    for(int i = 1000; i<= 9999; i++){
      // zishoushu(i,4);
      if((i*i)%10000 == i)cout<<"  "<<i;
    }
    for(long long i = 10000; i <= 99999; i++){
        MUN = i*i;
        if(MUN%100000 == i)cout<<"  "<<i;
    }
    for(long long i = 100000; i <= 200000; i++){
        MUN = i*i;
        if(MUN%1000000 == i)cout<<"  "<<i;
    }
    cout<<endl;
    return 0;
}

