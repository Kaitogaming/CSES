#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    map <long long,long long> mp;
    int n,x;
    cin>>n>>x;
    long long sum=0;
    long long ans=0;
    mp[0]++;
    for(int i=0;i<n;i++)
    {
        long long cur;
        cin>>cur;
        sum+=cur;
        mp[sum]++;
        ans+=mp[sum-x];
        if(x==0 && sum==sum-x)
        {
            ans--;
        }
        //cout<<ans<<endl;
    }
    cout<<ans;
}