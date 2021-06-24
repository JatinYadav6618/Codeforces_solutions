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
int n;cin>>n;
int pos1{},pos2{},pos3{};
while(n--){
  int x,y,z;
  cin>>x>>y>>z;
  pos1+=x;
  pos2+=y;
  pos3+=z;
}
if(pos1==0 && pos2==0 && pos3==0){
  cout<<"YES"<<br;
}
else{
  cout<<"NO"<<br;
}

}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}