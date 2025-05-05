#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> ans;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        auto index=upper_bound(ans.begin(),ans.end(),x);
        if(index==ans.end())
        {
            ans.push_back(x);
        }else
        {
            int cur=index-ans.begin();
            ans[cur]=x;
        }
    }
    cout<<ans.size();
}