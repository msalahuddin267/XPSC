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

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n);
        for(int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> ans;
        ans.push_back(b[0] - a[0]);

        for(int i = 1; i < n; i++)
        {
            if(b[i-1] > a[i])
                ans.push_back(b[i] - b[i-1]);
            else
                ans.push_back(b[i] - a[i]);
        }

        for(auto it : ans)
            cout << it << " ";
        cout << "\n";
    }
}

