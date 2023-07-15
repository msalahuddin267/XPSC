#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    map<int, int> mp;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num <= m)
        {
            mp[num]++;
        }
    }

    for(int i = 1; i <= m; i++)
        cout << mp[i] << endl;
}
