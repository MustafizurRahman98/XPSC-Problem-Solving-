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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, cnt = 0, cnt2 = 0;

        while (r < n)
        {
            if (r - l + 1 == k)
            {
                if (r == n - 1)
                {
                    while(l<=r)
                    {
                        if(s[l] == 'B' && cnt2 <= 0)
                        {
                            cnt++;
                            break;
                        }
                        l++;
                        cnt2--;
                    }
                }
                else if (s[l] == 'B' && cnt2 <= 0)
                {
                    cnt++;
                    cnt2=k;
                }
                l++;
                cnt2--;
            }
            r++;
        }
        cout << cnt << endl;
    }

    return 0;
}