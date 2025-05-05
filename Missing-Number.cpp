#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[200005];
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n-1);
    if(a[0]!=1)
    {
        cout<<1;
        return 0;
    }
    if(a[n-2]!=n)
    {
        cout<<n;
        return 0;
    }
    for(int i=1;i<n-1;i++)
    {
        if(a[i]!=a[i-1]+1)
        {
            cout<<a[i-1]+1;
            return 0;
        }
    }
}