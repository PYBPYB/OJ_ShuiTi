/*
*������ STL �е� map ��Ҳ���ýṹ�塣
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
    map<int,int>zhong_shu;            //����������man ����û���ֹ�����Ϊkey ���Գ��ִ���Ϊ value

    map<int,int>::iterator iter;      //ͨ��map����ķ�����ȡ��iterator����������һ��std::pair����
                                      //������������ iterator->first�� iterator->second�ֱ����ؼ��ֺʹ洢������

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
