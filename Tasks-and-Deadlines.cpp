#include <bits/stdc++.h>
using namespace std;
struct task{
    long long deadline;
    long long duration;
};
long long ans=0;
bool compare(task a,task b)
{
    return a.duration<b.duration;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    task t[200005];
    for(int i=0;i<n;i++)
    {
        cin>>t[i].duration>>t[i].deadline;
    }
    sort(t,t+n,compare);
    long long cur=0;
    for(int i=0;i<n;i++)
    {
        cur+=t[i].duration;
        ans+=t[i].deadline-cur;
    }
    cout<<ans;
}