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
    string s1,s2;
    cin>>s1>>s2;
    fo(i,s1.size()){
        if(s1[i]>='A' && s1[i]<='Z'){
            s1[i]+=32;
        }
        if(s2[i]>='A' && s2[i]<='Z'){
            s2[i]+=32;
        }
    }
    cout<<s1<<" "<<s2;
    if(s1>s2){
        cout<<1<<br;
    }
    else if(s1<s2){
        cout<<-1<<br;
    }
    else{
        cout<<0<<br;
    }
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}