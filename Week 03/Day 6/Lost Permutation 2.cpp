
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
        int n, s, mx = INT_MIN;
        cin >> n >> s;

        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            s += num;

            if(num > mx)
                mx = num;
        }

        int seq_sum = 0;
        int idx = 0;
        bool flag = false;

        for(int i = 1; ; i++)
        {
            seq_sum += i;

            if(seq_sum == s)
            {
                flag = true;
                idx = i;
                break;
            }

            if(seq_sum > s)
                break;
        }

        if(flag && idx >= mx)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}


