#include<bits/stdc++.h>

using namespace std;

void show(const vector<int>& jls)
{
    copy(jls.begin(),jls.end(),ostream_iterator<int>(cout," "));
    cout<<endl;
}


int JLS(int n)
{
    while(n)
    {
        if(n%10==0)
            return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    assert(JLS(102)==0);
    assert(JLS(10)==0);
    assert(JLS(123)==1);
    assert(JLS(331)==1);

    vector<int>jls;
    for(int i=1; i<=1000000; i++)
    {
        if(JLS(i)==1)
        {
            jls.push_back(i);
        }
    }

    sort(jls.begin(),jls.end());

    //show(jls);
    int n;
    int flag=1;
    while(cin>>n)
    {
        if(JLS(n)==0)
            cout<<"Unlucky"<<endl;
        else
            for(int i=0; i<jls.size(); i++) //·½·¨Ò»
            {

                if(n==jls[i])
                    cout<<i+1<<" ";
            }
            cout<<endl;

        // cout<<reference at(n)<<endl;
    }

    return 0;
}
