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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
      
        int l = n-1, r = n-1;
        while (r>=0)
        {
            cout<<a[r]<<" ";
            r--;
        }
    }

    return 0;
}