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

        for(int i = 1; i <= n; i++)
            cin >> v[i];

        for(int i = 1; i <= n; i++)
        {
            if((v[i-1] + 1) != v[i])
                v[i] = v[i-1] + 1;
            else
                v[i] = v[i-1] + 2;
        }

        cout << v[n] << "\n";
    }
}
