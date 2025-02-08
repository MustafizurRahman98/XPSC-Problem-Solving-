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
        ll n;
        cin >> n;
        string str;
        cin >> str;
        string revStr = str;
        reverse(revStr.begin(), revStr.end());
        if (str < (revStr + str))
        {
            cout << str << endl;
        }
        else
        {
            cout << (revStr + str) << endl;
        }
    }

    return 0;
}