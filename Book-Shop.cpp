#include <bits/stdc++.h>
using namespace std;
int price[1005],pages[1005];
int dp[1005][100005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)
    {
        cin>>price[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>pages[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j-price[i]>=0)
            dp[i][j]=max(dp[i][j],dp[i-1][j-price[i]]+pages[i]);
        }
    }
    cout<<dp[n][x];
}
// 1 2 3 4 5 6 7 8 9 10
// 1 2 3 4 5 6 7 8 9 10
