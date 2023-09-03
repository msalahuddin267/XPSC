#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_prime(int n)
{
    if(n == 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

void solve()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        for(int j = i+1; j < s.size(); j++)
        {
            string x = "";
            x += s[i];
            x += s[j];
            int y = stoi(x);
            if(is_prime(y))
            {
                cout << y << "\n";
                return;
            }
        }
    }
    cout << "-1\n";
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
