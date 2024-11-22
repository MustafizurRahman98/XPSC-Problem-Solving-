#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lenOfLongestSubarr(vector<int> &arr, int k)
    {
        int n = arr.size();
        long long sum=0;
        int l=0, r=0, ans=INT_MIN;
        while(r < n)
        {
            sum += arr[r];
            if(sum==k)
            {
                ans = max(ans, r-l+1);
            }
            
            // cout<<r<<" - "<<sum<<", ";
            r++;
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
