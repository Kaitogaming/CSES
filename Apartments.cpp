#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[200005];
    int b[200005];
    int n,k,m;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int j=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        while(b[j]+k<a[i])
        {
            j++;
        }
        if(b[j]+k>=a[i] && b[j]-k<=a[i])
        {
            ans++;
            j++;
        }
        if(j>=m)
        {
            break;
        }
        //cout<<i<<" "<<j<<" "<<a[i]<<" "<<b[j]<<" \n";
    }
    cout<<ans;
}
// 45 60 60 80
// 30 60 75
