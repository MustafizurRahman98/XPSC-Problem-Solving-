#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e5 + 5;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sereja = 0, dima = 0;
    int l = 0;
    int r = a.size() - 1;
    while (l < r)
    {
        if (a[l] > a[r])
        {
            sereja += a[l];
            l++;
        }
        else
        {
            sereja += a[r];
            r--;
        }
        if (a[l] > a[r])
        {
            dima += a[l];
            l++;
        }
        else
        {
            dima += a[r];
            r--;
        }
    }
    if (a.size() % 2 != 0)
    {
        sereja += a[r];
    }
    
    cout << sereja << " " << dima << endl;

    return 0;
}