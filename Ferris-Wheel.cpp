#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[200005];
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int j=0;
    int ans=0;
    for(int i=n-1;i>=j;i--)
    {
        if(i==j)
        {
            ans++;
            break;
        }
        if(a[i]+a[j]<=x)
        {
            j++;
            //cout<<"dm"<< " ";
        }
        ans++;
    }
    cout<<ans;
}