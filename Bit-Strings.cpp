#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    long long ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=2;
        ans%=MOD;
    }
    cout<<ans;
}