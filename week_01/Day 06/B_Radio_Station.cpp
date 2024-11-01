#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        ip += ';';
        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string cm, ip;
        cin >> cm >> ip;
        cout << cm << " " << ip << " #" << mp[ip] << endl;
    }

    return 0;
}