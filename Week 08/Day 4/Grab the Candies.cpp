#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    priority_queue<int> m;
    priority_queue<int, vector<int>, greater<int>> b;
    int ev = 0, od = 0, ev_sum = 0, od_sum = 0;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x % 2 == 0)
        {
            m.push(x);
            ev_sum += x;
        }
        else
        {
            b.push(x);
            od_sum += x;
        }
    }

    if(od_sum >= ev_sum)
    {
        cout << "NO\n";
        return;
    }

    while(m.size() && b.size())
    {
        ev += m.top();
        m.pop();

        od += b.top();
        b.pop();

        if(ev <= od)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
