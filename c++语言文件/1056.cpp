#include<iostream>
using namespace std;
void Num(int *a,int &n)
{
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
        for(int k=j;k<n;k++)a[k]=a[k+1];
               n=n-1;
        }
    }
}

void BubbleSort(int  *Buff, int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (Buff[j] > Buff[j + 1])
            {
                swap(Buff[j], Buff[j + 1]);
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


int main()
{
    int n;
    cin>>n;
    int  a[n];
for(int i=0;i<n;i++)cin>>a[i];
    Num(a,n);
    BubbleSort(a,n);
    cout<<n<<endl<<a[0];
    for(int i=1;i<n;i++)
        cout<<" "<<a[i];

    return 0;
}
