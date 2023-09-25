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
        int n, k;
        cin >> n >> k;

        deque<int> d(n);
        map<int, int> mp;
        int mex;

        for(int i = 0; i < n; i++)
        {
            cin >> d[i];
            mp[d[i]]++;
        }

        for(int i = 0; i <= n; i++)
        {
            if(mp[i] == 0)
            {
                mex = i;
                break;
            }
        }

        k = k % (n + 1);

        while(k--)
        {
            d.push_front(mex);
            mex = d.back();
            d.pop_back();
        }

        for(auto it : d)
            cout << it << " ";
        cout << "\n";
    }
}
