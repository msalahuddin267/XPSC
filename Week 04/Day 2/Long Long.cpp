#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        ll n, sum = 0, op = 0, cnt = 0;
        cin >> n;

        while(n--)
        {
            ll num;
            cin >> num;
            sum += abs(num);

            if(num < 0 && cnt == 0)
            {
                op++;
                cnt++;
            }
            if(num > 0)
                cnt = 0;
        }

        cout << sum << " " << op << "\n";
    }
}

