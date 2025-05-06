#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int cur=1;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<0<<"\n";
            continue;
        }
        if(i==2)
        {
            cout<<6<<"\n";
            continue;
        }
        long long num=i*i;
        long long sum=num*(num-1)/2;
        long long can=8*cur;
        cur+=i-1;
        cout<<sum-can<<"\n";
    }

}
//8 2^3    3   8*1
//24 2^3*3  4  8*3
//48 2^4*3  5  8*6
//80 2^4*5  6  8*10
//120 2^3*3*5  7  8*15
//168 2^       8*21