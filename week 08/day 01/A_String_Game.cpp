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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sz = s.size();
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero++;
            }
        }
        int One = n - zero;

        if (sz < 2 || zero == 0 || zero == sz)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            int sml = min(zero, One);
            if(sml%2!=0)
            {
                cout<<"Zlatan"<<endl;
            }
            else
            {
                cout<<"Ramos"<<endl;
            }
        }
    }

    return 0;
}