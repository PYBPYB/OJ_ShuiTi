/*
#include<iostream>
using namespace std;
  // 1.0                     ³¬Ê±À²£¡£¡£¡£¡£¡
int sushu(int x)
{
    for(int i = 2 ; i < x; i++)
    {
        if(x%i == 0)return 0;
    }
    return 1;
}

int main()
{
    int N;
    cin>>N;
    int sushu_dui = 0;
    for(int i = 2; i <= N; i++)
    {
         if((((sushu(i) == 1)&&(sushu(i+1) == 1))&&(i<N)) || (((sushu(i) == 1)&&(sushu(i+2) == 1))&&(i<N-1)))
            sushu_dui++;
    }
    cout<<sushu_dui<<endl;
    return 0;
}
超时啊！！！！
*/

//2.0


#include<iostream>
using namespace std;
int a[1000000]={0};
void prime_list()     //避免超时，先把素数记录下来
{
    a[0]=a[1]=1;
    for(int i=2;i<1000000;i++)
    {
        for(int j=i*2;j<1000000;j+=i)
        {a[j]=1;}
    }
}

main()
{
    int N,count=0;
    prime_list();
    cin>>N;
    for(int i=2;i<=N;i++)
    {
        if(a[i]==0&&(a[i-1]==0||a[i-2]==0))
        {count++;}
    }

   cout<<count<<endl;

}
