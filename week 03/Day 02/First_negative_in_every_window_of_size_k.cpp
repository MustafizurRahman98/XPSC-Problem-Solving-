#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> FirstNegativeInteger(vector<int> &arr, int k)
{
    int Size = arr.size(), l = 0, r = 0, idx=0;
    vector<int> ans;

    while (r < Size)
    {   
        if (r - l + 1 == k)
        {
            int flag = 1;
            while (idx <= r)
            {
                if (arr[idx] < 0)
                {
                    ans.push_back(arr[idx]);
                    flag = 0;
                    break;
                }
                idx++;
            }
            if (flag)
            {
                ans.push_back(0);
            }
            l++;
        }
        r++;
        if(l>idx)
        {
            idx=l;
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

    vector<int> ans = FirstNegativeInteger(ar, k);
    for(int val: ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}