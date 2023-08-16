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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if(sum == k)
        {
            cout << "0\n";
            continue;
        }

        if(sum < k)
        {
            cout << "-1\n";
            continue;
        }

        int temp = 0, gv = 0, i = n / 2 - 1, j = i - 1;
        while(temp <= k)
        {
            if(i < n && temp + v[i] <= k)
            {
                temp += v[i];
                gv++;
                i++;
            }

            if(j >= 0 && temp + v[j] <= k)
            {
                temp += v[j];
                gv++;
                j--;
            }
        }
        //cout << ans << "\n";
    }
}
