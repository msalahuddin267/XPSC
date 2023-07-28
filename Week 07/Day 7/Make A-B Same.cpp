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
        int n, one = 0;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] == 1)
                one++;
        }

        for(int i = 0; i < n; i++)
            cin >> b[i];

        if(a[0] != b[0] || a[n-1] != b[n-1])
            cout << "NO\n";
        else
        {
            for(int i = 1; i < n-1; i++)
            {
                if(a[i] != b[i])
                {
                    if(a[i] == 1)
                    {
                        cout << "NO\n";
                        break;
                    }
                    else
                    {
                        if(one > 0)
                        {
                            cout << "YES\n";
                            break;
                        }
                        else
                        {
                            cout << "NO\n";
                            break;
                        }
                    }
                }
                else
                    continue;
            }
        }
    }
}

