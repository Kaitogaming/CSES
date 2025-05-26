#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        int check=n;
        int mx=0;
        while(check)
        {
            mx=max(mx,check%10);
            check/=10;
        }
        n-=mx;
        count++;
    }
    cout<<count;
}