#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, z, al=0;
    cin >> x >> y >> z;
    al = 4 - (x + y + z);
    
    double a = 0, b = 0;
    a = (1.0 * x) + (0.5 * y) + (al * 1.0);
    b = (1.0 * z) + (0.5 * y);

    if (a > b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}