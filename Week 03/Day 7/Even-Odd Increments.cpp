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
        int n, q;
        cin >> n >> q;

        int a[n];
        int evn = 0, odd = 0;
        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if(a[i] % 2 == 0) evn++;
            else odd++;
        }

        while(q--)
        {
            int x, y;
            cin >> x >> y;

            if(x == 0)
            {
                for(int i = 0; i < evn; i++)
                    sum += y;

                if(y % 2 == 1)
                {
                    odd += evn;
                    evn = 0;
                }
            }
            else
            {
                for(int i = 0; i < odd; i++)
                    sum += y;

                if(y % 2 == 1)
                {
                    evn += odd;
                    odd = 0;
                }
            }

            cout << sum << "\n";
        }
    }
}

