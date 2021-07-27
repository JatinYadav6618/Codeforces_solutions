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
        int a,b,x,y,u,v; cin>>a>>b>>x>>y>>u>>v;
        int total=0;
        if(a==x && x==u)
            {
                if(b<y)
                    {
                        swap(b,y);
                    }
                if(b>v && v>y)
                    {
                        total=abs(a-x)+abs(b-y)+2;
                    }
                else
                    {
                        total=abs(a-x)+abs(b-y);
                    }
            }
        else if (b==y && y==v)
            {
                if(a<x)
                    {
                        swap(a,x);
                    }
                if(a>u && u>x)
                    {
                        total=abs(a-x)+abs(b-y)+2;
                    }
                else
                    {
                        total=abs(a-x)+abs(b-y);
                    }
            }
        else
            { 
                total=abs(a-x)+abs(b-y); 
            }
        cout<<total<<br;
    }
 
int32_t main()
{
 fastIO
testCases 
 solve();
}
// 2 5
// 2 1
// 2 3
// 6

// 1000 42
// 1000 1
// 1000 1000
// 41

// 1 10
// 3 10
// 2 10
// 4