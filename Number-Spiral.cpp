#include <bits/stdc++.h>
using namespace std;
long long ans(int x,int y)
{
    long long mx=max(x,y);
    mx--;
    long long answer=mx*mx;
    mx++;
    if(mx==x)
    {
        if(x%2)
        {
            answer+=y;
        }else
        {
            answer=mx*mx;
            answer++;
            answer-=y;
        }
    }else
    {
        if(y%2)
        {
            answer=mx*mx;
            answer++;
            answer-=x;
        }else
        {
            answer+=x;
        }
    }
    return answer;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        cout<<ans(x,y);
        cout<<"\n";
    }
}