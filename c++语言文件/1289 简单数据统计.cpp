#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int>num((istream_iterator<int>(cin)),istream_iterator<int>());
    cout<<*min_element(num.begin(),num.end())<<" "
        <<*max_element(num.begin(),num.end())<<" "
        <<setiosflags(ios::fixed)<<setprecision(3)<<accumulate(num.begin(),num.end(), 0.0)/num.size()<<endl;
    return 0;
}
