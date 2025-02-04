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
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<char> lt(26);
        for (int i = 0; i < 26; i++)
        {
            lt[i] = i + 97;
        }

        for (int i = 0; i < n; i++)
        {
            int v = a[i];
            cout<<lt[b[v]];
            b[v]++;   
        }
        cout<<endl;
    }

    return 0;
}