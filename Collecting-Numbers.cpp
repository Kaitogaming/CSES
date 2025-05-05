#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    pair <int, int> a[200005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    int cur=-1;
    int ans=1;
    for(int i=0;i<n;i++)
    {
        if(a[i].second<cur)
        {
            ans++;
        }
        cur=a[i].second;
    }
    cout<<ans;
}