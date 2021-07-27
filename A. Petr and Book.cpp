//*********************
//**  Author-JATIN   **
//*********************
 
#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testCases int t;cin>>t;while(t--)
#define mod 1000000007
#define br "\n"
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i =1;i<=n;i++)
#define vec vector<int>
#define pb push_back
 
void solve()
{
   int pages; cin>>pages;
  vec  v(7);
  fo(i,7)
  {
      cin>>v[i];
  }
  int c=0;
  while(pages>0)
  {
      pages-=v[c];
      c++;
      if(c==7)
      {
          c=0;
      }
  }
  if(c==0)
  {
      cout<<"7"<<endl;
  }
  else
  {
      cout<<c<<endl;
  }
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}