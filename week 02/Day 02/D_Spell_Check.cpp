#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            mp[c]++;
        }

        if (mp.size() != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            string s = "Timur";
            string ans = "YES";
            for (char c : s)
            {
                if (mp[c] != 1)
                {
                    ans = "NO";
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}