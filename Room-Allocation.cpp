#include <bits/stdc++.h>
using namespace std;
struct home{
    int start;
    int end;
    int ind;
};
bool compare(home a,home b)
{
    return a.start<b.start;
}
home a[200005];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].start;
        cin>>a[i].end;
        a[i].ind=i;
    }
    //cout<<"\n";
    sort(a,a+n,compare);
    multiset<pair<int,int>> ans;
    int id[200005];
    for(int i=0;i<n;i++)
    {
        auto index=ans.lower_bound({a[i].start,0});
        if(index==ans.begin())
        {
            ans.insert({a[i].end,ans.size()+1});
            id[a[i].ind]=ans.size();
        }else
        {
            index--;
            pair<int,int> cur=*index;
            ans.erase(index);
            ans.insert({a[i].end,cur.second});
            id[a[i].ind]=cur.second;
        }
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<id[i]<<" ";
    }
}