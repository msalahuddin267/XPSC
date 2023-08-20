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
            v[i] = 0;

        if(n < 4)
        {
            for(int i = 1; i <= n; i++)
                cout << i << " ";
            cout << "\n";
            continue;
        }

        for(int i = 1; i <= n; i++)
        {
            if(v[i] == 0)
            {
                cout << i << " ";
                v[i] = 1;
            }

            int x = i;

            while(x * 2 <= n)
            {
                x *= 2;
                if(v[x] == 0)
                {
                    cout << x << " ";
                    v[x] = 1;
                }
            }
        }
        cout << "\n";
    }
}
