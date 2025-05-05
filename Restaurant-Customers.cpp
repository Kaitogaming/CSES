#include <bits/stdc++.h>
using namespace std;
pair<int,bool> a[400005];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n*2;i++)
    {
        int x;
        cin>>x;
        a[i].first=x;
        a[i].second=i%2;
    }
    sort(a,a+n*2);
    int cur=0;
    int ans=0;
    for(int i=0;i<n*2;i++)
    {
        if(a[i].second==0)
        {
            cur++;
        }else cur--;
        ans=max(ans,cur);
    }
    cout<<ans;
}