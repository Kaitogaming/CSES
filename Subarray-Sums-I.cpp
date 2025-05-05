#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    int a[200005];
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0,j=0;
    int ans=0;
    int cur=0;
    while(i<=n && j<=n)
    {
        if(cur==x)
        {
            ans++;
            //cout<<i<<" "<<j<<endl;
        }
        if(cur<x)
        {
            cur+=a[j];
            j++;
        }else
        {
            cur-=a[i];
            i++;
        }
    }
    cout<<ans;
}