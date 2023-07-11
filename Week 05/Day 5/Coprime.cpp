#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = -1;
        cin >> n;

        vector<int> v(1005);
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            v[x] = i;
        }

        for(int i = 1; i <= 1000; i++)
        {
            for(int j = 1; j <= 1000; j++)
            {
                if(gcd(i, j) == 1 && v[i] && v[j])
                {
                    ans = max(ans, v[i] + v[j]);
                }
            }
        }
        cout << ans << "\n";
    }
}
