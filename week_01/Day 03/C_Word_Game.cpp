#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        cin >> n;
        map<string, int> myMap;
        vector<string> a;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            myMap[s]++;
            a.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            myMap[s]++;
            a.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            myMap[s]++;
            a.push_back(s);
        }

        int x = n, sum = 0, cnt = 1;
        for (string S : a)
        {
            if (myMap[S] == 2)
            {
                sum += 1;
            }
            else if (myMap[S] == 1)
            {
                sum += 3;
            }
            if (cnt == x)
            {
                cout << sum << " ";
                sum = 0;
                cnt = 1;
            }
            else
            {
                cnt++;
            }
        }
        cout << endl;
    }

    return 0;
}