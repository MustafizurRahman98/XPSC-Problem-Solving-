#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll ar[n + 1];
    ll sum = 0;
    ll mxSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((sum - ar[i]) % 2 == 0)
            {
                mxSum = max(mxSum, sum - ar[i]);
            }
        }

        cout << mxSum << endl;
    }

    return 0;
}