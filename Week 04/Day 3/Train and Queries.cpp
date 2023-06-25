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
        cout << "\n";

        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        while(q--)
        {
            int a, b;
            cin >> a >> b;

            bool flag = false;
            auto it_a = find(v.begin(), v.end(), a);
            auto it_b = find(it_a, v.end(), b);

            if(it_b != v.end())
            {
                flag = true;
                break;
            }

            if(flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }

    }
}
