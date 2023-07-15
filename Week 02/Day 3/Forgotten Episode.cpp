#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;
    for(int i = 0; i < n-1; i++)
    {
        int ep;
        cin >> ep;
        mp[ep]++;
    }

    for(int i = 1; i <=n; i++)
    {
        if(mp[i] == 0)
        {
            cout << i << "\n";
            break;
        }
    }
}
