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
        int a[n + 1], b[n + 1];

        for (int i = 0; i <= n; i++)
            b[i] = 0;

        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }

        int mis = 0;
        for (int i = 1; i <= n; i++)
        {
            if (b[i] == 0)
            {
                mis = i;
                break;
            }
        }

        b[mis] = 0;
        for (int i = 1; i < n; i++)
        {
            int f = -1;
            for (int j = 1; j < n; j++)
            {
                int x;
                cin >> x;
                if (x == mis)
                {
                    f = 1;
                }
                else
                {
                    b[x] = f;
                }
            }
        }
    
        int l = 1;
        while (l < n)
        {
            int x = a[l];
            if (b[x] == 1)
            {
                cout << mis << " ";
                break;
            }
            cout << x << " ";
            l++;
        }
        if (l == n)
        {
            cout << mis;
        }
        else
        {
            while (l < n)
            {
                cout << a[l] << " ";
                l++;
            }
        }
        cout << endl;
    }

    return 0;
}