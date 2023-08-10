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

        vector<int> pos, neg;
        int p_sum = 0, n_sum = 0;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if(a < 0)
            {
                n_sum += a;
                neg.push_back(a);
            }
            else
            {
                p_sum += a;
                pos.push_back(a);
            }
        }

        if(p_sum + n_sum == 0)
            cout << "NO\n";

        else
        {
            cout << "YES\n";
            n_sum *= -1;
            sort(pos.begin(), pos.end(), greater<int>());

            if(p_sum > n_sum)
            {
                for(auto it : pos)
                    cout << it << " ";

                for(auto it : neg)
                    cout << it << " ";
            }
            else
            {
                for(auto it : neg)
                    cout << it << " ";

                for(auto it : pos)
                    cout << it << " ";
            }
            cout << "\n";
        }
    }
}
