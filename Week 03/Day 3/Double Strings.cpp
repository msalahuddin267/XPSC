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

        vector<string> v(n);
        vector<int> ans;

        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
        {
            bool flag = false;
            for(int j = 0; j < n; j++)
            {

            }
            if(flag)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        for(auto it : ans)
            cout << it;
        cout <<"\n";
    }
}
