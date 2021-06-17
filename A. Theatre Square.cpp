#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll val = ceil((double)n / a) * ceil((double)m / a);
    cout << val << endl;
    return 0;
}