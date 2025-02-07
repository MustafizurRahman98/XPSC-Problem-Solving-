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
        int n;
        cin >> n;
        string a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            char ac = a[i];
            char bc = b[i];
            char cc = c[i];
            if(ac==bc && ac!=cc)
            {
                ans="YES";
                break;
            }
            else if(ac!=bc)
            {
                if(cc != ac && cc != bc)
                {
                    ans="YES";
                    break;
                }
            }
            
        }
        cout << ans << endl;
    }

    return 0;
}