#include <bits/stdc++.h>
using namespace std;
    int a[23];
    long long ans=LONG_LONG_MAX;
    int n;
void solve(int i,long long sum1,long long sum2)
{
    if(i==n)
    {
        ans=min(ans,abs(sum1-sum2));
        return;
    }
    solve(i+1,sum1+a[i],sum2);
    solve(i+1,sum1,sum2+a[i]);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    solve(0,0,0);
    cout<<ans;
}