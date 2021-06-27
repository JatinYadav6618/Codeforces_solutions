#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testCases int t;cin>>t;while(t--)
#define mod 1000000007
#define br "\n"
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back

bool primenumber(int i){
    int count=0;
    if(i<1){
        return false;
    }
    else if(i%2==0){
        return false;
    }
    else{
        for (int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            return true;
        }
        else{
            return false;
        }
    }
}
 
void solve()
{
    int n,m;
    cin>>n>>m;
    int next=0;
    for(int i =n+1;i<=m;i++){
        if(primenumber(i)==true){
            next=i;
            break;
        }
    }
    if(m==next){
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