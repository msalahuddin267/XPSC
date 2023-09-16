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
        ll n;
        cin >> n;

        vector<int> v(n);
        int cnt = 0;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n-1; i++)
        {
            if(v[i] == v[i+1])
                cnt++;
        }

        if(cnt < 2)
        {
            cout << "0\n";
            continue;
        }

        int l, r;

        for(int i = 0; i < n-1; i++)
        {
            if(v[i] == v[i+1])
            {
                l = i + 1;
                break;
            }
        }

        for(int i = n-1; i > 0; i--)
        {
            if(v[i] == v[i-1])
            {
                r = i - 1;
                break;
            }
        }

        if(r - l == 0)
            cout << 1 << "\n";
        else
            cout << r - l << "\n";
    }
}

