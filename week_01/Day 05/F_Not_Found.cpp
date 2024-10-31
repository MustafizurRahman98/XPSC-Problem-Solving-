#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ch[27];
    for (int i = 0; i < 26; i++)
    {
        ch[i] = 0;
    }
    string s;
    cin >> s;
    for (char c : s)
    {
        int x = c - 'a';
        ch[x]++;
    }
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if (ch[i] == 0)
        {
            cout << char(i + 'a') << endl;
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << "None" << endl;
    }

    return 0;
}