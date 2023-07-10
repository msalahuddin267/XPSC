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
        int n, k;
        cin >> n >> k;

        if(n < k)
            cout << "NO\n";
        else
        {
            if(n == k)
            {
                cout << "YES\n";
                while(n--)
                    cout << "1 ";
                cout << "\n";
            }

            else if(n % 2 == 0 && k % 2 == 1)
            {
                if(k * 2 <= n)
                {
                    cout << "YES\n";
                    for(int i = 1; i < k; i++)
                        cout << "2 ";
                    cout << n - (k-1) * 2 << "\n";
                }
                else
                    cout << "NO\n";
            }

            else if(n % 2 == 0 && k % 2 == 0)
            {
                if(k-1+3 <= n)
                {
                    cout << "YES\n";
                    for(int i = 1; i < k; i++)
                        cout << "1 ";
                    cout << n - (k-1) << "\n";
                }
                else
                    cout << "NO\n";
            }

            else if(n % 2 == 1 && k % 2 == 1)
            {
                cout << "YES\n";
                for(int i = 1; i < k; i++)
                    cout << "1 ";
                cout << n - (k-1) << "\n";
            }

            else
                cout << "NO\n";
        }
    }
}
