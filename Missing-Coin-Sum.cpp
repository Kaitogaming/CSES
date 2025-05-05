#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    long long a[200005];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long cursum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>cursum+1)
        {
            cout<<cursum+1;
            return 0;
        }
        cursum+=a[i];
    }
    cout<<cursum+1;
}