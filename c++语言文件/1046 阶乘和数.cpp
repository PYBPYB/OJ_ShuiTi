#include<iostream>
using namespace std;

long jc(int n)
{
    int i;
    long s=1;
    for(i=1; i<=n; i++)
        s*=i;
    return s;
}

int main()
{
    int a,b,c,d,e,f,g;
    long int m1,m2,m3,m4,m5,m6,n1,n2,n3,n4,n5,n6;
    cout<<1;
    for(a=1; a<=9; a++)
    {
        if(a==jc(a) && a != 1)
            cout<<" "<<a;    /*一位数满足条件则输出*/
        for(b=0; b<=9; b++)
        {
            m1=a*10+b;
            n1=jc(b)+jc(a);
            if(m1==n1)
                cout<<" "<<m1;    /*两位数满足条件则输出*/
            for(c=0; c<=9; c++)
            {
                m2=m1*10+c;
                n2=n1+jc(c);
                if(m2==n2)
                    cout<<" "<<m2;    /*三位数满足条件则输出*/
                for(d=0; d<=9; d++)
                {
                    m3=m2*10+d;
                    n3=n2+jc(d);
                    if(m3==n2)
                        cout<<" "<<m3;    /*四位数满足条件则输出*/
                    for(e=0; e<=9; e++)
                    {
                        m4=m3*10+e;
                        n4=n3+jc(e);
                        if(m4==n3)
                            cout<<" "<<m4;    /*五位数满足条件则输出*/
                        for(f=0; f<=9; f++)
                        {
                            m5=m4*10+f;
                            n5=n4+jc(f);
                            if(m5==m4)
                                cout<<" "<<m5;    /*六位数满足条件则输出*/
                            for(g=0; g<=9; g++)
                            {
                                m6=m5*10+g;
                                n6=n5+jc(g);
                                if(m6==n6)
                                    cout<<" "<<m6;   /*七位数满足条件则输出*/
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<endl;
    return 0;
}
