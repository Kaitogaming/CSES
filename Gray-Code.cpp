#include <bits/stdc++.h>
using namespace std;
int n;
void solve(vector<string> &curans)
{
    vector <string> cur;
    for(int i=0;i<curans.size();i++)
    {
        cur.push_back('0'+curans[i]);
    }
    for(int i=curans.size()-1;i>=0;i--)
    {
        cur.push_back('1'+curans[i]);
    }
    curans=cur;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector <string> ans;
    cin>>n;
    ans.push_back("");
    for(int i=0;i<n;i++)
    solve(ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\n";
    }
}