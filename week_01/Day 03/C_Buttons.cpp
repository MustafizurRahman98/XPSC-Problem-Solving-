#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int mx = max(a, b);

    if ((mx + mx - 1) > (a + b))
    {
        cout << (mx + mx - 1) << endl;
    }
    else
    {
        cout << a + b << endl;
    }

    return 0;
}