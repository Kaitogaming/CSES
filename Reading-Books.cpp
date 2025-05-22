#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    int a[200005];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long ans=0;
    int i=0,j=n-1;
    long long left=0,right=0;
    while(i<=j)
    {
        if(right<=left)
        {
            right+=a[j];
            j--;
        }else{
            left+=a[i];
            i++;
        }
    }
    int wait=right-left;
    wait= max(wait-(right-a[j+1]),(long long) 0);
    cout<<wait+right+left;
}