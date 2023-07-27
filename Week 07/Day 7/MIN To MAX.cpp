#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        int cnt = 1;

        for(int i = 1; i < n; i++)
        {
            if(v[0] == v[i])
                cnt++;
            else
                break;
        }
        cout << n - cnt << "\n";
    }
    return 0;
}
