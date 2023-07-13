#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 0;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        for(int k = 1; k <= 100; k++)
        {
            int i = 0, j = n-1, pr = 0;
            while(i < j)
            {
                if(v[i]+v[j] == k)
                {
                    pr++;
                    i++;
                    j--;
                }

                else if(v[i]+v[j] > k)
                    j--;

                else
                    i++;
            }
            ans = max(ans, pr);
        }
        cout << ans << "\n";
    }
}
