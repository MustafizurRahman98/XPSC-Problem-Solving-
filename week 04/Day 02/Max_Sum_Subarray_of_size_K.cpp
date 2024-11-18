#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long maximumSumSubarray(vector<int> &arr, int k)
{
    int Size = arr.size(), l = 0, r = 0;
    ll ans = 0, sum = 0;
    while (r < Size)
    {
        if (r - l + 1 == k)
        {
            sum += arr[r];
            ans = max(ans, sum);
            r++;
            sum -= arr[l];
            l++;
        }
        else
        {
            sum += arr[r];
            r++;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    ll ans = maximumSumSubarray(ar, k);
    cout << ans << endl;

    return 0;
}