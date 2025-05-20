#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long dp[1000005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,t;
    cin>>n>>t;
    set <long long> s;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        s.insert(x);
    }
    dp[0]=1;
    for(int i=1;i<=t;i++)
    {
        for(auto it=s.begin();it!=s.end();it++)
        {
            long long cur=*it;
            if(i-cur>=0)
            {
                dp[i]+=dp[i-cur];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[t];
}