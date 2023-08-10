#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    ll i = 0, j = n - 1, fst = v[i], lst = v[j], ans = 0;
    while(i < j)
    {
        if(fst == lst)
        {
            ans = fst;
            i++;
            j--;
            fst += v[i];
            lst += v[j];
        }

        else if(fst < lst)
        {
            i++;
            fst += v[i];
        }

        else
        {
            j--;
            lst += v[j];
        }
    }
    cout << ans << "\n";
}


