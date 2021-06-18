#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-' && s[i + 1] == '.')
        {
            v.push_back(1);
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            v.push_back(2);
            i++;
        }
        else 
        {
            v.push_back(0);
        }
    }
    for (auto v1 : v)
    {
        cout << v1;
    }
    return 0;
}