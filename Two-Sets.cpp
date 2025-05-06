#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    if((n*(n+1)/2)%2)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    long long cur=1;
    if(n%2)
    {
        int sum=(n+1)*3/4;
        cout<<n/2<<"\n";
        cout<<sum<<" ";
        int count=1;
        while(count<n/2)
        {
            if(cur==sum || cur==n/2+1 || cur==n+1-sum)
            {
                cur++;
                continue;
            }
            cout<<cur<<" "<<n+1-cur<<" ";
            count+=2;
            cur++;
        }
        cout<<"\n"<<n/2+1<<"\n";
        cout<<n+1-sum<<" "<<n/2+1<<" ";
        count=2;
        while(count<n/2+1)
        {
            if(cur==sum || cur==n/2+1 || cur==n+1-sum)
            {
                cur++;
                continue;
            }
            cout<<cur<<" "<<n+1-cur<<" ";
            count+=2;
            cur++;
        }
    }else
    {
        long long count=0;
        cout<<n/2<<"\n";
        while(count!=n/2)
        {
            cout<<cur<<" "<<n+1-cur<<" ";
            count+=2;
            cur++;
        }
        cout<<"\n"<<n/2<<"\n";
        count=0;
        while(count!=n/2)
        {
            cout<<cur<<" "<<n+1-cur<<" ";
            count+=2;
            cur++;
        }
    }
}
// 1 2 3 4 5 6 7

//n/2+n
//3/2n