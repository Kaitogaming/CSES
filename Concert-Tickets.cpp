#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    multiset<int> s;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        auto index=s.upper_bound(x);
        if(index==s.begin())
        {
            cout<<-1<<"\n";
            continue;
        }
        index--;
        cout<<*index<<"\n";
        s.erase(index);
    }
}