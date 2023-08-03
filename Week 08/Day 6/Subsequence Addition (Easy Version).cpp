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

        for(int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        if(v[0] != 1)
            cout << "NO\n";

        else
        {
            int sum = 1;
            bool flag = true;

            for(int i = 1; i < n; i++)
            {
                if(v[i] > sum)
                {
                    flag = false;
                    break;
                }
                else
                    sum += sum;
            }

            if(flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}
