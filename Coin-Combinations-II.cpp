#include <bits/stdc++.h>
using namespace std;
int a[105];
const int MOD=1e9+7;
long long dp[1000005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=x;j++)
        {
            if(j-a[i]>=0)
            {
                dp[j]+=dp[j-a[i]];
                dp[j]%=MOD;
            }
        }
    }
    cout<<dp[x];
}