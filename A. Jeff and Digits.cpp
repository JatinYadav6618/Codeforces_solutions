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
    int n; cin>>n;
    vec v(n);
    fo(i,n){
        cin>>v[i];
    }
    int zero=0;
    int five=0;
    fo(i,n){
        if(v[i]==0){
            zero++;
        }
        if(v[i]==5){
            five++;
        }
    }
    if(zero==0){
        cout<<-1<<br;
    }
    else if(five<9){
        cout<<0<<br;
    }
    else{
        five -= five%9;
        for( int i=1;i<=five;i++){
            cout<<5;
        }
         for( int i=1;i<=zero;i++){
            cout<<0;
        }

    }
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}