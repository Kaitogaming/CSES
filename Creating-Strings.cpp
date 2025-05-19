#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> ans;
    ans.push_back(s);
    while(next_permutation(s.begin(),s.end()))
    {
        ans.push_back(s);
    }
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}
