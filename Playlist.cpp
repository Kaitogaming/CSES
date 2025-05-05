#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[200005];
    set<int> s;
    int n;
    cin>>n;
    int ans=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(s.find(a[i])==s.end())
        {
            s.insert(a[i]);
        }else
        {
            cout<<endl;
            ans=max(ans,(int)s.size());
            while(a[j]!=a[i])
            {
                s.erase(s.find(a[j]));
                j++;
            }
            j++;
        }
    }
    ans=max(ans,(int)s.size());
    cout<<ans;
}