#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while(q--)
    {
        int l, r;
        cin >> l >> r;

        auto lb = lower_bound(v.begin(), v.end(), l);
        auto ub = upper_bound(v.begin(), v.end(), r);
        ub--;

        int left = lb - v.begin();
        int right = ub - v.begin();

        cout << ub - lb + 1 << " ";
    }
}
