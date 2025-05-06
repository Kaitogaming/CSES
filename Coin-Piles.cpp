#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b) swap(a,b);
        a-=b-a;
        b-=2*(b-a);
        if(a<0)
        {
            cout<<"NO\n";
            continue;
        }
        if(a%3)
        {
            cout<<"NO\n";
            continue;
        }else
        {
            cout<<"YES\n";
            continue;
        }
    }
}