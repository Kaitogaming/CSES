#include <bits/stdc++.h>
using namespace std;
pair<int,int> a[5005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int cur=lower_bound(a+j+1,a+n,make_pair(x-a[i].first-a[j].first,0))-a;
            if(a[cur].first+a[i].first+a[j].first==x && cur<n)
            {
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[cur].second;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
}