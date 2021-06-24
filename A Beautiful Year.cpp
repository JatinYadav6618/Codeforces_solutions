#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define testCases \
    int t;        \
    cin >> t;     \
    while (t--)
#define mod 1000000007
#define br "\n"
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb push_back

void solve()
{
    int year;
    cin >> year;

    while (true)
    {
        
        vector<int> num;
        year++;
        int x=year;
        while (x != 0)
        {
            num.pb(x%10);
            x/=10;
             
        }
        
        if(num[0]!=num[1]!=num[2]!=num[3]){
            cout<<year;
            break;
        }
               
    }
}

int32_t main()
{
    fastIO
    // testCases
    solve();
}