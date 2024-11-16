#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;

ll grid(int I, int J, vector<vector<int>> &a)
{
    ll sum = 0;

    int i = I - 1;
    int j = J - 1;

    sum += a[I][J];

    while (i >= 0 && j >= 0)
    {
        sum += a[i][j];
        i--;
        j--;
    }

    i = I + 1;
    j = J + 1;

    while (i < n && j < m)
    {
        sum += a[i][j];
        i++;
        j++;
    }

    i = I + 1;
    j = J - 1;

    while (i < n && j >= 0)
    {
        sum += a[i][j];
        i++;
        j--;
    }

    i = I - 1;
    j = J + 1;

    while (i >= 0 && j < m)
    {
        sum += a[i][j];
        i--;
        j++;
    }

    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        // int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll mx = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(mx, grid(i, j, a));
            }
        }

        cout << mx << endl;
    }

    return 0;
}