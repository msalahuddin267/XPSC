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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if(sum == k)
        {
            cout << "0\n";
            continue;
        }

        if(sum < k)
        {
            cout << "-1\n";
            continue;
        }

        int i = 0, j = 0, ans = 0, temp = 0;

        while(j < n)
        {
            temp += v[j];

            if(temp <= k)
            {
                ans = max(ans, j - i + 1);
            }

            if(temp > k)
            {
                while(temp > k)
                {
                    temp -= v[i];
                    i++;
                }
            }

            j++;
        }
        cout << n - ans << "\n";
    }
}
