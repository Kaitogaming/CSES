#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    pair<int,int> a[200005];
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a,a+n);
    int i=0;
    int j=n-1;
    while(j>i)
    {
        if(a[i].first+a[j].first==x)
        {
            cout<<a[i].second+1<<" "<<a[j].second+1;
            return 0;
        }else if(a[i].first+a[j].first>x)
        {
            j--;
        }else
        {
            i++;
        }
    }
    cout<<"IMPOSSIBLE";
}