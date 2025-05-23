#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    map<int,pair<int,int>> mp;
    int n,x;
    cin>>n>>x;
    int a[1005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int value=x-a[i]-a[j];
            if(mp.find(value)!=mp.end())
            {
                cout<<mp[value].first<<" "<<mp[value].second<<" "<<i+1<<" "<<j+1;
                return 0;
            }
        }
        for(int j=0;j<i;j++)
        {
            mp[a[i]+a[j]]=make_pair(i+1,j+1);
        }
    }
    cout<<"IMPOSSIBLE";
}