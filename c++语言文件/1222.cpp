#include <iostream>
#include <stdio.h>
using namespace std;
class Sort
{
public:
    int  Import();
    void BubbleSort();
    void Ergodic();
    void Contrary_Ergodic();
    void Max_Num();
};

int Import(int *p,int length)
{
    for(int i=0; i<length; i++)cin>>p[i]; // return i;

}

void BubbleSort(int  *p, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (p[j] > p[j + 1])
            {
                swap(p[j], p[j + 1]);
            }
        }
    }
}

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void Ergodic(int  *p,int length)
{
    for (int i = 0; i < length; i++)
    {
        // cout << p[i] <<" ";//if(i==3)break;
        cout<<p[i]<<endl;
        //if(i==length-1);
        //else cout<<endl;
    }

}
void Contrary_Ergodic(int  *p,int length)
{
    for (int i = 0; i<length; i++)
    {
        // cout << p[i] <<" ";//if(i==3)break;
        cout<<p[length-i-1]<<endl;
        //if(i==length-1);
        //else cout<<endl;
    }

}


void Max_Num(int *p,int length)
{
    cout<<p[length-1];
}

int main()
{   int length;
    while(scanf("%d",&length)==1){
    int T;//cin>>length;
    cin>>T;
    int p[length];
    Import(p,length);// Ergodic(p,length);
    length=sizeof(p)/sizeof(int);
    BubbleSort(p,length);

    if(T==0) Ergodic(p,length);
    else Contrary_Ergodic(p,length);
    }

    // Max_Num(p,length);
    return 0;

}
