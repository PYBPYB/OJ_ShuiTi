#include<iostream>
#include<iomanip>
#include<sstream>
#include<algorithm>
#include<cstdio>
using namespace std;

struct ks_pm
{
    string name;
    int Accepted=0;
    int Penalty=0;
} kspm[100];

int str_to_int( const string &val )       //string 转 int
{
    istringstream in(val.c_str());
    int ret = 0;
    in>>ret;
    return ret;
}

int panduan_chengji(string s,int m)      //计算每一题
{
    string str1,str2;
    for(int i=0; i<s.length(); i++)
        if(s[i]=='(')
        {
            str1.assign(s,0,i);
            str2.assign(s,i+1,s.length()-i-1-1);
            return str_to_int(str1)+m*str_to_int(str2);
        }
    return str_to_int(s);
}

bool tmp(ks_pm n,ks_pm m)                 //排序
{
    if(n.Accepted == m.Accepted)
    {
        if(n.Penalty == m.Penalty)return n.name[0]<m.name[0];
        else return n.Penalty < m.Penalty;
    }
    else return n.Accepted>m.Accepted;
}

int main(){
    int n,m;
    cin>>n>>m;
    int mun=0;
    for(int i=0; cin>>kspm[i].name; i++)
    {
        mun++;
        string str;
        for(int j=0; j<n; j++)
        {
            cin>>str;
            int key=panduan_chengji(str,m);
            if(key>0)
            {
                kspm[i].Accepted++;
                kspm[i].Penalty += key;
            }
        }
    }
    sort(kspm,kspm+mun,tmp);

    for(int i=0; i<mun; i++){
        //printf("%-10s %2d %4d\n",kspm[i].name,kspm[i].Accepted,kspm[i].Penalty);
       cout<<left<<setw(10)<<kspm[i].name<<" ";
       cout<<right<<setw(2)<<kspm[i].Accepted<<" ";
        cout<<right<<setw(4)<<kspm[i].Penalty<<endl;
    }
}

