#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int flag = 1;
    for (int i = c; i <= b; i += c)
    {
        if (i >= a && i <= b)
        {
            cout << i << endl;
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << -1 << endl;
    }

    return 0;
}