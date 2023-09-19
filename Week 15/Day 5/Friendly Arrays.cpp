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
        int n, m;
        cin >> n >> m;

        priority_queue<int> p1, p2;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p1.push(x);
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            p2.push(x);
        }

        int mini = 0, xor1 = 0, xor2 = 0;

        while (p2.size())
        {
            mini |= p2.top();
            p2.pop();
        }

        while (p1.size())
        {
            xor1 ^= (p1.top() | mini);
            xor2 ^= p1.top();
            p1.pop();
        }

        int mn = min(xor1, xor2);
        int mx = max(xor1, xor2);

        cout << mn << " " << mx << "\n";
    }
}
