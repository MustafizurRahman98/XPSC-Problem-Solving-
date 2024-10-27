#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    map<string,int> myMap;
    string s;
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        getline(cin, s);
        myMap[s]=1;
    }

    cout<<myMap.size()<<endl;

    return 0;
}