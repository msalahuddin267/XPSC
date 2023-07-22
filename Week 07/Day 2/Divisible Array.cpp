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
        int n;
        cin >> n;

        vector<int> v(n+1);
        int tot = 0;

        for(int i = n; i > 1; i--)
        {
            v[i] = i;
            tot += i;
        }

        int div = tot / n + 1;
        v[1] = n * div - tot;

        for(int i = 1; i <= n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
}
