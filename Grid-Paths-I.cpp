#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
int dp[1005][1005];
const int mod=1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    dp[0][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]=='*') continue;
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
            dp[i][j]%=mod;
        }
    }
    cout<<dp[n][n];
}