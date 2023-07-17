#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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

        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                for(int k = j+1; k < n; k++)
                {
                    if(v[j] - v[i] == v[k] - v[j])
                    {
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(flag) cout << "NO\n";
        else cout << "YES\n";
    }
}
