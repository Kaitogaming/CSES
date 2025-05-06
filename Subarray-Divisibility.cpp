#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<int,int> mp;
    int n;
    cin>>n;
    int sum=0;
    mp[0]++;
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        x%=n;
        if(x<0)
        {
            x+=n;
            x%n;
        }
        sum+=x;
        sum=abs(sum);
        sum%=n;
        ans+=mp[sum];
        mp[sum]++;
        //cout<<sum<<"\n";
    }
    cout<<ans;
}