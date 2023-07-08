#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    int od = 0, evn = 0, ans = 0;

    for(int i = 1; i < n; i++)
    {
        if(i % 2 == 0)
            evn += v[i];
        else
            od += v[i];
    }

    if(evn == od)
        ans++;

    for(int i = 1; i < n; i++)
    {
        if(i % 2 == 0)
        {
            evn -= v[i];
            evn += v[i-1];
        }
        else
        {
            od -= v[i];
            od += v[i-1];
        }

        if(evn == od)
            ans++;
    }
    cout << ans << "\n";
}
