#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, i, num = 0;
    cin >> n;

    for(i = 0; i < 10; i++)
    {
        num = (long long)pow(10,i);
        if(num == n)
        {
            cout << 0 << "\n";
            return;
        }
        else if(num > n)
            break;
    }
    cout << n - (long long)pow(10, i-1) << "\n";
    return;
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
