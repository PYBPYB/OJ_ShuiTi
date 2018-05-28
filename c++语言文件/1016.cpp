
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
using namespace std;


int main()
{

    for(int a=1; a>=0; a--)
        for(int b=1; b>=0; b--)
            for(int c=1; c>=0; c--)
                for(int d=1; d>=0; d--)
                    for(int e=1; e>=0; e--)
                        for(int f=1; f>=0; f--)

                        {
                            if(d==0)
                            {
                                e=0;
                                if(       a+b>0
                                          &&a+d<2
                                          &&a+e+f==2
                                          &&(b+c==2||b+c==0)
                                          &&c+d==1
                                  )
                                  {
                                if(a==1)cout<<"A"<<",";
                                if(b==1)cout<<"B"<<",";
                                if(c==1)cout<<"C"<<",";
                                if(d==1)cout<<"D"<<",";
                                if(e==1)cout<<"E"<<",";
                                if(f==1)cout<<"F"<<",";
                                  }
                            }
                        }
   return 0;
}
