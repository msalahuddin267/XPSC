#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    deque<int> v;
    vector<int> qr(q);
    deque<int> d;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < q; i++)
        cin >> qr[i];

    for(int i = 0; i < q; i++)
    {
        if(d.size())
        {
            auto x = find(d.begin(), d.end(), qr[i]);
            if(x != d.end())
            {
                cout << x - d.begin() + 1 << " ";
                int val = *x;
                d.erase(x);
                d.push_front(val);
                continue;
            }
        }

        auto y = find(v.begin(), v.end(), qr[i]);
        cout << y - v.begin() + 1 << " ";

        int val = *y;
        v.erase(y);
        v.push_front(val);
        d.push_front(val);
    }
}
