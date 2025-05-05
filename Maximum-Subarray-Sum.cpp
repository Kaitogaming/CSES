#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    long long cursum=0;
    long long curmax=0;
    long long mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        mx=max(x,mx);
        if(cursum+x>0)
        {
            cursum+=x;
        }else
        {
            cursum=0;
        }
        curmax=max(cursum,curmax);
    }
    if(mx<0)
    {
        cout<<mx;
        return 0;
    }
    cout<<curmax;
}