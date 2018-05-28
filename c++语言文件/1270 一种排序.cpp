#include<iostream>
#include<algorithm>
using namespace std;

struct cfx
{
    int a;
    int b;
    int c;
}cf[1000];

bool paixu(cfx m,cfx n)
{
    if(m.a == n.a)
    {
        if(m.b == n.b)
        {
            return m.c<n.c;
        }
        else return m.b<n.b;
    }
    else return m.a<n.a;
}

int main()
{
    int o,m,T;
    cin>>o;
    while(o--)
    {
       cin>>m;
       for(int i = 0;i<m;i++)cin>>cf[i].a>>cf[i].b>>cf[i].c;

       sort(cf,cf+m,paixu);

       for(int i = 0;i<m;i++)
       {
        if(cf[i].b*cf[i].c == cf[i+1].b*cf[i+1].c);
        else cout<<cf[i].a<<" "<<cf[i].b<<" "<<cf[i].c<<endl;;
       }
    }
    return 0;
}
