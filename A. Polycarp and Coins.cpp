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
#define MAXT *max_element(a.begin(),a.end())
#define MINT *min_element(a.begin(),a.end())
 
void solve()
{
    int n; cin>>n;
    int c2=ceil(n/3);
    int c1=abs(n-(2*c2));
    if((n%3)==1 || (n%3)==0)
    {
        cout<<c1<<" "<<c2 <<br;
    }
    if((n%3)==2){
        cout<<c2<<" "<<c2+1<<br;
    }
    // cout<<c1+2*c2<<br;
}
 
int32_t main()
{
 fastIO
testCases 
 solve();
}