#include<iostream>
using namespace std;

int main()
{o
    int VUL,D;
    while(cin>>VUL>>D)
    {
        int mun =1;
        int Time=0;
        int cs=0;            //记录循环次数
        for(int i=VUL; i>0; i -= D)
        {
             Time++;
            if(cs == mun)    //滴完的时候刚好是休息时间就会多算一次
            {
                Time++;
                cs=0;
                mun++;
            }
             cs++;
        }
        cout<<Time<<endl;
    }
    return 0;
}
