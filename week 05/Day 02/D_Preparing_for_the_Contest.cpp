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
        int n, k;
        cin >> n >> k;
        vector<int> a;
        for (int i = n; i > 0; i--)
        {
            a.push_back(i);
        }

        reverse(a.begin(), a.begin() + k + 1);

        for (int v : a)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}