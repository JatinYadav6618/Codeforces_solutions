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
#define MAXT *max_element(a.begin(),a.end());
#define MINT *min_element(a.begin(),a.end());
 
void solve()
{
    string s,s1;
    cin>>s>>s1;
    int len=s.size();
    string rev=s;
    reverse(rev.begin(),rev.end());
    //  cout<<rev;
    int count=0;
    fo(i,len){
        if(rev[i]==s1[i]){
            count++;
        }        
    }
    if(len==count){
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