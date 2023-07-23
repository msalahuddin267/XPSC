#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    bool flag = false;

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for(int i = 1; i < (1 << n); i++)
    {
        int res = 0;
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j))
                res += v[j];
            else
                res -= v[j];
        }
        if(res % 360 == 0)
        {
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

