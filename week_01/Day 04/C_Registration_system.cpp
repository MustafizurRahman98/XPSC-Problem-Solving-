#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> myMap;
    while (t--)
    {
        string s;
        cin >> s;

        if (myMap[s] == 0)
        {
            myMap[s]++;
            cout << "OK" << endl;
        }
        else
        {
            cout << s << myMap[s] << endl;
            myMap[s]++;
        }
    }

    return 0;
}