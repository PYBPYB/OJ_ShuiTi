/*
*可以用 STL 中的 map ，也可用结构体。
*
*
*
*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int n;
   // int a[N];
   // for(int i=0; i<N; i++)cin>>a[i];
    map<int,int>zhong_shu;            //创建众数的man ，以没出现过的数为key ，以出现次数为 value

    map<int,int>::iterator iter;      //通过map对象的方法获取的iterator数据类型是一个std::pair对象，
                                      //包括两个数据 iterator->first和 iterator->second分别代表关键字和存储的数据

    for(int i=0; i<N; i++){
            cin>>n;

       iter = zhong_shu.find(n);

       if    (iter != zhong_shu.end())   iter->second++;
       else  zhong_shu.insert(map<int,int>::value_type(n,1));
    }


     int max_cs=0;
    map<int,int>::iterator ter;
        for(ter =zhong_shu.begin(); ter != zhong_shu.end(); ter++)
            if(ter->second>max_cs)max_cs=ter->second;

    for(ter =zhong_shu.begin(); ter != zhong_shu.end(); ter++)
    if(ter->second == max_cs){
        cout<<ter->first<<endl;
        cout<<ter->second<<endl;
        break;
    }


    return 0;
}
