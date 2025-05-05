#include <bits/stdc++.h>
using namespace std;
struct movie
{
    int start;
    int end;
};
bool compare(movie x,movie y)
{
    return x.end<y.end;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    movie a[200005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].start>>a[i].end;
    }
    sort(a,a+n,compare);
    int current=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i].start>=current)
        {
            ans++;
            current=a[i].end;
        }
    }
    cout<<ans;
}