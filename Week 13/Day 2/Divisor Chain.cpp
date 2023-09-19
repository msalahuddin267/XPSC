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

        vector<int> ans;
        int num = 1;

        while(num <= n)
        {
            ans.push_back(num);
            num *= 2;
        }

        if(ans.back() != n)
        {
            int dif = n - ans.back();

            for(int i = 31; i >=0; i--)
            {
                if(dif & (1 << i))
                    ans.push_back(ans.back() + (1 << i));
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans.size() << "\n";
        for(auto it : ans)
            cout << it << " ";
        cout << "\n";
    }
}
