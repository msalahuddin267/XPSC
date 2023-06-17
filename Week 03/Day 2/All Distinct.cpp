#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, unq = 0, dup = 0;
        cin >> n;
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if(mp[num] == 0)
            {
                unq++;
                mp[num]++;
            }
            else
                dup++;
        }

        if(dup % 2 == 0)
            cout << unq << "\n";
        else
            cout << unq-1 << "\n";
    }
}

