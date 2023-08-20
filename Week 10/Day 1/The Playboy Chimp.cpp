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

    int q;
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;

        auto low = lower_bound(v.begin(), v.end(), x);
        int idx1 = low - v.begin();

        auto up = upper_bound(v.begin(), v.end(), x);
        int idx2 = up - v.begin();

        if(idx1 == 0)
            cout << "X ";
        else
            cout << v[idx1-1] << " ";

        if(idx2 == n)
            cout << "X\n";
        else
            cout << v[idx2] << "\n";
    }
}
