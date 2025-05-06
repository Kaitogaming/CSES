#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int count[27]={0};
    char s;
    int size=0;
    while(cin>>s)
    {
        if(s=='e')
        {
            break;
        }
        count[s-'A']++;
        size++;
    }
    string ans;
    char mid='0';
    for(int i=0;i<27;i++)
    {
        if(count[i]%2 && mid!='0')
        {
            cout<<"NO SOLUTION";
            return 0;
        }
        int num=count[i]/2;
        if(count[i]%2) mid='A'+i;
        while(num--)
        {
            ans+='A'+i;
        }
    }
    cout<<ans;
    if(mid!='0') cout<<mid;
    reverse(ans.begin(),ans.end());
    cout<<ans;
}