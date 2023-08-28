#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        vector<int> v;

        int in = 1;
        v.push_back(y);

        for(int i = 0; i < n-2; i++)
        {
            y -= in;
            v.push_back(y);
            in++;
        }

        if(y - in >= x)
        {
            v.push_back(x);
            sort(v.begin(), v.end());
            for(auto it : v)
                cout << it << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
}

