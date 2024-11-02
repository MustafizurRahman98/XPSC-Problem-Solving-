#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int idx = 1;
    map<string, int> mp;
    vector<string> v(N);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            v[idx] = s;
            mp[s] = idx;
            idx++;
        }
        else
        {
            v[mp[s]] = "NoneNone";
            v[idx] = s;
            mp[s] = idx;
            idx++;
        }
    }

    for (int i = idx - 1; i > 0; i--)
    {
        if (v[i] != "NoneNone")
        {
            cout << v[i] << endl;
        }
    }

    return 0;
}