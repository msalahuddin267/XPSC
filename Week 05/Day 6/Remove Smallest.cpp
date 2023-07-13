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
        int n;
        cin >> n;

        vector<int> v(n);
        bool flag = true;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        for(int i = 0; i < n-1; i++)
        {
            if(abs(v[i] - v[i+1]) > 1)
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
