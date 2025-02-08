#include <bits/stdc++.h>
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
        int half = (n * n) / 2, val = n * n - 1;
        int cur = 1;

        for (int i = 1; i <= n; i++)
        {
            stack<int> st;
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 && j == 1)
                {
                    cout << cur << " ";
                    continue;
                }
                else
                {
                    if (cur < val)
                    {
                        cur = cur + val;
                    }
                    else
                    {
                        if (cur <= half)
                        {
                            cur = cur + val;
                        }
                        else
                        {
                            cur = cur - val;
                        }
                    }
                }
                val--;

                if (i % 2 == 0)
                {
                    st.push(cur);
                }
                else
                {
                    cout << cur << " ";
                }
            }
            while (!st.empty())
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;
        }
    }

    return 0;
}