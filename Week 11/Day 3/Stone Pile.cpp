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

    for(int i = 0; i < n; i++)
    cin >> v[i];

    int a = v[0], b = 0;

    for(int i = 1; i < n; i++)
    {
        if(a <= b)
            a += v[i];
        else
            b += v[i];
    }

    int ans = abs(a - b);
    a = 0, b = v[0];

    for(int i = 1; i < n; i++)
    {
        if(b <= a)
            b += v[i];
        else
            a += v[i];
    }

    cout << min(ans, abs(a - b)) << "\n";
}
