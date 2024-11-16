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
        string a, b;
        cin >> a >> b;

        char SizeName1 = a[a.size() - 1];
        char SizeName2 = b[b.size() - 1];

        int xCountA = a.size() - 1;
        int xCountB = b.size() - 1;

        if (SizeName1 == 'S')
        {
            xCountA += 1;
        }
        else if (SizeName1 == 'M')
        {
            xCountA += 100;
        }
        else if (SizeName1 == 'L')
        {
            xCountA += 200;
        }

        if (SizeName2 == 'S')
        {
            xCountB += 1;
        }
        else if (SizeName2 == 'M')
        {
            xCountB += 100;
        }
        else if (SizeName2 == 'L')
        {
            xCountB += 200;
        }

        if (SizeName1 == 'S' && SizeName2 == 'S')
        {
            if (xCountA > xCountB)
            {
                cout << "<" << endl;
            }
            else if (xCountA < xCountB)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
        else
        {
            if (xCountA > xCountB)
            {
                cout << ">" << endl;
            }
            else if (xCountA < xCountB)
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }

    return 0;
}