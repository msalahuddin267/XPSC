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

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        if(n % 2 == 0)
            cout << "YES\n";
        else
        {
            bool flag = false;

            for(int i = 0; i < n-1; i++)
            {
                if(v[i] >= v[i+1])
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
    }
}
