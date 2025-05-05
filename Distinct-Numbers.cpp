#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    set <int> check;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int current;
        cin>>current;
        check.insert(current);
    }
    cout<<check.size();
}