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

        if(n < 3)
        {
            cout << "YES\n";
            continue;
        }

        int l = 0, r = n-1;

        for(int i = 0; i < n; i++)
        {
            if(v[i] > v[i+1])
            {
                l = i;
                break;
            }
        }

        for(int i = n-1; i > 0; i--)
        {
            if(v[i-1] < v[i])
            {
                r = i;
                break;
            }
        }

        bool flag = true;

        for(int i = l+1; i < r; i++)
        {
            if(v[i] < v[l] && v[i] < v[r])
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

