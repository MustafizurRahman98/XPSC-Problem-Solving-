#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s, t;
    cin >> s;
    cin >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
