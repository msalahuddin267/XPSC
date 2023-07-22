#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k, fedor, ans = 0;
    cin >> n >> m >> k;

    vector<int> ply(m);

    for(int i = 0; i < m; i++)
        cin >> ply[i];
    cin >> fedor;

    for(int i = 0; i < m; i++)
    {
        int dif = (fedor ^ ply[i]);
        int cnt = 0;

        while(dif)
        {
            if(dif & 1)
                cnt++;
            dif = dif >> 1;
        }

        if(cnt <= k)
            ans++;
    }
    cout << ans << "\n";
}
