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
        int k, n;
        cin >> k >> n;

        vector<int> ans = {1};

        for (int i = 2; i <= k; i++)
        {
            int num = min(ans.back()+i-1, n-k+i);
            ans.push_back(num);
        }

        for(int it : ans)
            cout << it << " ";
        cout << "\n";
    }
}


