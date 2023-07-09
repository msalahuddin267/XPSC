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

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(v[i] > v[j])
                {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << "\n";
    }
}
