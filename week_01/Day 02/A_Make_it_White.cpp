#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0;
        int r = a.size() - 1;
        while (l < r)
        {
            if (a[l] == 'B')
            {
                break;
            }
            l++;
        }
        while (l < r)
        {
            if (a[r] == 'B')
            {
                break;
            }
            r--;
        }

        cout << (r - l) + 1 << endl;
    }

    return 0;
}