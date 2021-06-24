#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testCases int t;cin>>t;while(t--)
#define mod 1000000007
#define br "\n"
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
 
void solve()
{
string s;
cin>>s;
if(s[0]>='a' && s[0]<='z'){
    s[0]-=32;
}
cout<<s<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}