#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    long long ans=0;
    long long check;
    cin>>check;
    for(int i=1;i<n;i++)
    {
        long long current;
        cin>>current;
        if(current>=check)
        {
            check=current;
        }else
        {
            ans+=check-current;
        }
    }
    cout<<ans;
}