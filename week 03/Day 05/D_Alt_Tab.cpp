#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, int> mp;
    vector<string> a(n+1);
    a[0]="EmPTy";
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            a[i] = s;
            mp[s] = i;
        }
        else
        {
            int idx = mp[s];
            a[idx] = "EmPTy";
            a[i] = s;
            mp[s] = i;
        }
    }
   
    for (int i=n; i>0; i--)
    {   
        string st = a[i];
        if (st != "EmPTy")
        {
            string ans = st.substr(st.length() - 2);
            cout << ans;
        }
    }

    return 0;
}