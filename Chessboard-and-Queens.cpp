#include <bits/stdc++.h>
using namespace std;
char a[9][9];
long long ans=0;
bool check(int i,int j)
{
    if(a[i][j]!='.')
    return false;
    for(int k=0;k<8;k++)
    {
        if(a[k][j]=='Q')
        {
            return false;
        }
    }
    for(int k=0;k<8;k++)
    {
        if(a[i][k]=='Q')
        {
            return false;
        }
    }
    for(int k=0;k<8;k++)
    {
        if(i+k<8 && j+k<8)
        if(a[i+k][j+k]=='Q')
        return 0;
        if(i+k<0 && j-k>=0)
        if(a[i+k][j-k]=='Q')
        return 0;
        if(i-k>=0 && j+k<8)
        if(a[i-k][j+k]=='Q')
        return 0;
        if(i-k>=0 && j-k>=0)
        if(a[i-k][j-k]=='Q')
        return 0;
    }
    return true;
}
void solve(int x,int y)
{
    if(y>8)
    {
        return;
    }
    if(x==8)
    {
        ans++;
        return;
    }
    if(check(x,y))
    {
        a[x][y]='Q';
        solve(x+1,0);
        a[x][y]='.';
    }
    solve(x,y+1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
    solve(0,0);
    cout<<ans;
}