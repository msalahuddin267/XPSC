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
        long long n, m, h, ans = 0;
        cin >> n >> m >> h;

        vector<long long> n_cap(n), m_cap(m);

        for(int i = 0; i < n; i++)
            cin >> n_cap[i];

        for(int i = 0; i < m; i++)
            cin >> m_cap[i];

        sort(n_cap.begin(), n_cap.end(), greater<long long>());
        sort(m_cap.begin(), m_cap.end(), greater<long long>());

        for(int i = 0, j = 0; i < n && j < m; i++, j++)
        {
            if(m_cap[j]*h < n_cap[i])
                ans += m_cap[j]*h;
            else
                ans += n_cap[i];
        }
        cout << ans << "\n";
    }
}
