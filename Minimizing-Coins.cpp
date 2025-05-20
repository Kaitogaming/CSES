#include <bits/stdc++.h>
using namespace std;
long long n,t;
long long dp[1000005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(dp,0x3f,sizeof(dp));
    cin>>n>>t;
    dp[0]=0;
    set <long long> s;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        s.insert(x);
    }
    for(int i=1;i<=t;i++)
    {
        for(auto it=s.begin();it!=s.end();it++)
        {
            long long cur=*it;
            if(i-cur>=0)
            {
                dp[i]=min(dp[i],dp[i-cur]+1);
            }
        }
    }
    if(dp[t]==dp[1000004])
    {
        cout<<-1;
        return 0;
    }
    cout<<dp[t];
}