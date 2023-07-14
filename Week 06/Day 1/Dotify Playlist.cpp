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
        int n, k, l, ans = 0;
        cin >> n >> k >> l;

        priority_queue<int> pq;

        while(n--)
        {
            int first, sec;
            cin >> first >> sec;

            if(sec == l)
                pq.push(first);
        }

        if(pq.size() < k)
            cout << "-1\n";

        else
        {
            while(k--)
            {
                ans += pq.top();
                pq.pop();
            }
            cout << ans << "\n";
        }
    }
}
