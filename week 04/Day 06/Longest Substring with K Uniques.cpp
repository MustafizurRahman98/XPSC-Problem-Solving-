#include <bits/stdc++.h>
using namespace std;

class Solution
{ public:
    int longestKSubstr(string &s, int k)
    {
        int n = s.size();
        unordered_map<char, int> mp;
        int l = 0, r = 0, ans = INT_MIN;
        while (r < n)
        {
            mp[s[r]]++; 
            if (mp.size() == k)
            {
                ans = max(ans, r - l + 1); 
            }

            while (mp.size() > k)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            if (mp.size() == k)
            {
                ans = max(ans, r - l + 1);
            }

            r++;
        }

        if (ans == INT_MIN)
        {
            return -1;
        }
        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }

    return 0;
}
