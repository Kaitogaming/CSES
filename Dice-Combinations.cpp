#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long dp[1000005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i]+=dp[i-j];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[n];
}