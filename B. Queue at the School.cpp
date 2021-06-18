#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--)
    {
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                v.push_back(i);
            }
        }
        int temp = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int pos = v[i];
            temp = s[pos];
            s[pos] = s[pos + 1];
            s[pos + 1] = temp;
        }
    }

    cout << s << endl;
    return 0;
}