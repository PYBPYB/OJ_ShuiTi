/*
* 用map肯定能做
*用数组也应该可以
*
*
*
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int zi_mu[26]={0};
    string str,Str;
    while(getline(cin,Str))str+=Str;

    for(int i=0; i<str.length(); i++){
            if(str[i]=='a' || str[i]=='A')zi_mu[0]++;
       else if(str[i]=='b' || str[i]=='B')zi_mu[1]++;
       else if(str[i]=='c' || str[i]=='C')zi_mu[2]++;
       else if(str[i]=='d' || str[i]=='D')zi_mu[3]++;
       else if(str[i]=='e' || str[i]=='E')zi_mu[4]++;

       else if(str[i]=='f' || str[i]=='F')zi_mu[5]++;
       else if(str[i]=='g' || str[i]=='G')zi_mu[6]++;
       else if(str[i]=='h' || str[i]=='H')zi_mu[7]++;
       else if(str[i]=='i' || str[i]=='I')zi_mu[8]++;
       else if(str[i]=='j' || str[i]=='J')zi_mu[9]++;

       else if(str[i]=='k' || str[i]=='K')zi_mu[10]++;
       else if(str[i]=='l' || str[i]=='L')zi_mu[11]++;
       else if(str[i]=='m' || str[i]=='M')zi_mu[12]++;
       else if(str[i]=='n' || str[i]=='N')zi_mu[13]++;
       else if(str[i]=='o' || str[i]=='O')zi_mu[14]++;

       else if(str[i]=='p' || str[i]=='P')zi_mu[15]++;
       else if(str[i]=='q' || str[i]=='Q')zi_mu[16]++;
       else if(str[i]=='r' || str[i]=='R')zi_mu[17]++;
       else if(str[i]=='s' || str[i]=='S')zi_mu[18]++;
       else if(str[i]=='t' || str[i]=='T')zi_mu[19]++;

       else if(str[i]=='u' || str[i]=='U')zi_mu[20]++;
       else if(str[i]=='v' || str[i]=='V')zi_mu[21]++;
       else if(str[i]=='w' || str[i]=='W')zi_mu[22]++;
       else if(str[i]=='x' || str[i]=='X')zi_mu[23]++;
       else if(str[i]=='y' || str[i]=='Y')zi_mu[24]++;

       else if(str[i]=='z' || str[i]=='Z')zi_mu[25]++;
    }

    for(int i=0; i<26; i++){
             if(i==0)cout<<"a "<<zi_mu[i]<<endl;
        else if(i==1)cout<<"b "<<zi_mu[i]<<endl;
        else if(i==2)cout<<"c "<<zi_mu[i]<<endl;
        else if(i==3)cout<<"d "<<zi_mu[i]<<endl;
        else if(i==4)cout<<"e "<<zi_mu[i]<<endl;

        else if(i==5)cout<<"f "<<zi_mu[i]<<endl;
        else if(i==6)cout<<"g "<<zi_mu[i]<<endl;
        else if(i==7)cout<<"h "<<zi_mu[i]<<endl;
        else if(i==8)cout<<"i "<<zi_mu[i]<<endl;
        else if(i==9)cout<<"j "<<zi_mu[i]<<endl;

        else if(i==10)cout<<"k "<<zi_mu[i]<<endl;
        else if(i==11)cout<<"l "<<zi_mu[i]<<endl;
        else if(i==12)cout<<"m "<<zi_mu[i]<<endl;
        else if(i==13)cout<<"n "<<zi_mu[i]<<endl;
        else if(i==14)cout<<"o "<<zi_mu[i]<<endl;

        else if(i==15)cout<<"p "<<zi_mu[i]<<endl;
        else if(i==16)cout<<"q "<<zi_mu[i]<<endl;
        else if(i==17)cout<<"r "<<zi_mu[i]<<endl;
        else if(i==18)cout<<"s "<<zi_mu[i]<<endl;
        else if(i==19)cout<<"t "<<zi_mu[i]<<endl;

        else if(i==20)cout<<"u "<<zi_mu[i]<<endl;
        else if(i==21)cout<<"v "<<zi_mu[i]<<endl;
        else if(i==22)cout<<"w "<<zi_mu[i]<<endl;
        else if(i==23)cout<<"x "<<zi_mu[i]<<endl;
        else if(i==24)cout<<"y "<<zi_mu[i]<<endl;

        else if(i==25)cout<<"z "<<zi_mu[i]<<endl;
    }
    return 0;
}
/*  版本2.0，我去，好短啊！！！

using namespace std;
int main(int argc, char const *argv[]) {
  // freopen("data.in", "r", stdin);
  char c;
  int f[26] = {0};
  while ((c = getchar()) != -1 && c != '#')
    if (islower(c)) ++f[c - 'a'];
  for (int i = 0; i < 26; i++) printf("%c %d\n", 'a' + i, f[i]);

  return 0;
}
*/
