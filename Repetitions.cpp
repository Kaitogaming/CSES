#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char compare;
    cin>>compare;
    char check;
    int ans=1;
    int curans=1;
    while(cin>>check)
    {
        if(check==compare)
        {
            curans++;
        }else
        {
            curans=1;
            compare=check;
        }
        ans=max(ans,curans);
    }
    cout<<ans;
}