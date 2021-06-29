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
    vector<char> v;
    fo(i,s.size()){
        if(s[i]!='+'){
            v.pb(s[i]);
        }
        
    }
    sort(v.begin(),v.end());
 
    fo(i,v.size())
  {
      cout<<v[i];
      if(i<v.size()-1) cout<<"+";
  }
 
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}