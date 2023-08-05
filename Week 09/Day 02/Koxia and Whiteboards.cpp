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
        int n, m;
        cin >> n >> m;

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }

        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            pq.pop();
            pq.push(x);
        }

        long long ans = 0;

        while(pq.size())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << "\n";
    }
}
