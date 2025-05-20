#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long n,t;
bool check(long long mid)
{
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=mid/a[i];
        if(ans>=t)
        {
            return true;
        }
    }
    return ans>=t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long mn=LONG_LONG_MAX;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    long long r=mn*t;
    long long l=0;
    //cout<<r<<endl;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        //cout<<mid<<endl;
        if(check(mid))
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<l;
}