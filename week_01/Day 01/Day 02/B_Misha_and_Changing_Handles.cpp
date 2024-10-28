#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, string> myMap;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int flag = 1;
        for (pair<string, string> p : myMap)
        {
            if (p.second == s1)
            {
                myMap[p.first] = s2;
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            myMap[s1] = s2;
        }
    }

    cout << myMap.size() << endl;
    for (pair<string, string> p : myMap)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}