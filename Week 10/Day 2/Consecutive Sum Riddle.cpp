#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    if(n == 1)
    {
        cout << "0 1\n";
        return;
    }

    ll i = 0, sum = 0;

    while(1)
    {
        i++;
        sum += i;

        if(sum == n)
        {
            cout << 1 << " " << i << "\n";
            return;
        }

        if(sum > n)
            break;
    }

    ll j = 0;

    while(1)
    {
        j--;
        sum += j;

        if(sum == n)
        {
            cout << j << " " << i << "\n";
            return;
        }
    }
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

