#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;

    cout << "YES\n";
    for(ll i = l; i <= r; i += 2)
        cout << i << " " << i + 1 << "\n";
}
