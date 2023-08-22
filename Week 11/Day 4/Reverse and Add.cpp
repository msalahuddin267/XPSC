#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_palindrome(ll n)
{
    string s = to_string(n);
    string temp = s;
    reverse(temp.begin(), temp.end());

    if(temp == s)
        return true;
    else
        return false;
}

ll num_rev(ll n)
{
    ll num = 0;
    while(n != 0)
    {
        ll dg = n % 10;
        num = num * 10 + dg;
        n = n / 10;
    }
    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        int cnt = 0;

        while(!is_palindrome(n))
        {
            cnt++;
            ll temp = num_rev(n);

            if(is_palindrome(temp))
            {
                n = temp;
                break;
            }
            else
            {
                n += temp;
            }
        }
        cout << cnt << " " << n << "\n";
    }
}
