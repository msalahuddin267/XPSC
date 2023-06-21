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
        int n, s, sum = 0;
        cin >> n >> s;

        map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            mp[num]++;
            sum += num;
        }

        int target_sum = sum + s;
        int seq_sum = 0;
        int tot_digit = 0;
        bool flag = false;

        for(int i = 1; ; i++)
        {
            seq_sum += i;

            if(seq_sum == target_sum)
            {
                flag = true;
                tot_digit = i;
                break;
            }

            if(seq_sum > target_sum)
                break;
        }

        int need_digit = tot_digit - n;
        int st_sum = sum, cnt_digit = 0;
        bool flag2 = false;

        if(flag)
        {
            for(int i = 1; ; i++)
            {
                if(mp[i] > 0)
                    continue;

                st_sum += i;
                cnt_digit++;

                if(st_sum == target_sum)
                {
                    flag2 = true;
                    break;
                }

                if(st_sum > target_sum)
                    break;
            }

            if(flag2 == true && need_digit == cnt_digit)
                cout << "YES\n";
            else
                cout << "NO\n";
        }

        else
            cout << "NO\n";
    }
}
