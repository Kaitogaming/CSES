#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    long long a[200005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=abs(a[i]-a[n/2]);
    }
    cout<<ans;
}