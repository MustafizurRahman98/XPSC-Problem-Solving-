#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        int n = arr.size(), ans = INT_MIN;
        long long sum = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (mp.find(sum - k) != mp.end())
            {
                ans = max(ans, i - mp[sum - k]);
            }
            if (mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
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
    cin.ignore(); 

    while (t--)
    {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); 
        stringstream ss(inputLine);
        int value;
        while (ss >> value)
        {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); 

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
    }

    return 0;
}
