#include<iostream>
using namespace std;
int run_nian(int n)
{
    if((n%4==0 && n%100!=0)||(n%400 == 0))return 1;
    return 0;
}

int yue_tian(int y)
{
    if(y==1 ||y==3 ||y==5 ||y==7 ||y==8 ||y==10 ||y==12)return 1;
    else if(y==4 ||y==6 ||y==9 ||y==11)return 0;
    else return -1;
}
void ri_to_yue_to_nian(int n,int y,int r)    //7、8月份都是31天!!!!判断
{                                            //月份天数的条件错误
     cout<<n<<"-"<<y<<"-"<<r<<endl;
    if(run_nian(n) == 1){
        if(     yue_tian(y)==-1 && r>=29)ri_to_yue_to_nian(n+(y+1)/13, y%12+1, r-29);
        else if(yue_tian(y)== 1 && r>=31)ri_to_yue_to_nian(n+(y+1)/13, y%12+1, r-31);
        else if(yue_tian(y)== 0 && r>=30)ri_to_yue_to_nian(n+(y+1)/13, y%12+1, r-30);
        else cout<<n<<"-"<<y<<"-"<<r<<endl;
    }
    else{

        if(     yue_tian(y)==-1 && r>=28)ri_to_yue_to_nian(n+(y+1)/13, y%12+1, r-28);
        else if(yue_tian(y)== 1 && r>=31)ri_to_yue_to_nian(n+(y+1)/13, y%12+1, r-31);
        else if(yue_tian(y)== 0 && r>=30)ri_to_yue_to_nian(n+(y+1)/13, y%12+1, r-30);
        else cout<<n<<"-"<<y<<"-"<<r<<endl;
    }
}


int main()
{
    int mun_ri = 10000;

    int nian,yue,ri;
    while(cin>>nian>>yue>>ri)
    {
        ri_to_yue_to_nian(nian,yue,ri+mun_ri);
    }
}
