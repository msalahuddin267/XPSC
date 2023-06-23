#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool is_palindrome(ll num)
{
    string s1 = to_string(num);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, ans = 0;
        cin >> n;

        ll a[n];
        ll freq[(1 << 15) + 1] = {0};
        vector<ll> pd;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        for(int i = 0; i <= (1 << 15); i++)
        {
            if(is_palindrome(i))
            {
                pd.push_back(i);
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < pd.size(); j++)
            {
                int res = a[i] ^ pd[j];
                if(res > (1 << 15))
                {
                    continue;
                }
                ans += freq[res];
            }
        }

        cout << (ans + n) / 2 << "\n";
    }
}

