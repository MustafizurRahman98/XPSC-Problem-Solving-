#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, t;
    cin >> a >> b >> t;
    int x = t / a;
    cout << b * x << endl;

    return 0;
}