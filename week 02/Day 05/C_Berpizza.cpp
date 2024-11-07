#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, id = 1;
    cin >> t;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    while (t--)
    {
        int x, y;
        cin >> x;
        if (x == 1)
        {
            cin >> y;
            s.insert({id, y});
            ml.insert({y, -id});
            id++;
        }
        else if (x == 2)
        {
            int pos = s.begin()->first, val = s.begin()->second;
            cout << pos << " ";
            s.erase(s.begin());
            ml.erase({val, -pos});
        }
        else if (x == 3)
        {
            int pos = -(ml.rbegin()->second), val = ml.rbegin()->first;
            cout << pos << " ";
            ml.erase(--ml.end());
            s.erase({pos, val});
        }
    }
    return 0;
}