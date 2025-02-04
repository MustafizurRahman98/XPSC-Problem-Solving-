#include <bits/stdc++.h>
#define ll long long
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
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            int m = n;
            while (m)
            {
                for (int i = 65; i <= 90; i++)
                {
                    char c = i;
                    cout << c << c;
                    m -= 2;
                    if (m == 0)
                    {
                        break;
                    }
                }
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}