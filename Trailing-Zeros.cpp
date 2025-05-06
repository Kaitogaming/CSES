#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long ans=0;
    int n;
    cin>>n;
    for(long long i=5;i<=n;i*=5)
    {
        ans+=n/i;
    }
    cout<<ans;
}