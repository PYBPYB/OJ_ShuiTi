#include<iostream>
using namespace std;

int main()
{o
    int VUL,D;
    while(cin>>VUL>>D)
    {
        int mun =1;
        int Time=0;
        int cs=0;            //��¼ѭ������
        for(int i=VUL; i>0; i -= D)
        {
             Time++;
            if(cs == mun)    //�����ʱ��պ�����Ϣʱ��ͻ����һ��
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
