#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> m, f;
    int mid = 1e6 / 2;
    int me = INT_MIN, frnd = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x <= mid)
            m.insert(x);
        else
            f.insert(x);
    }

    if(m.size())
        me = *m.rbegin() - 1;

    if(f.size())
        frnd = 1e6 - *f.begin();

    cout << max(me, frnd) << "\n";
}
