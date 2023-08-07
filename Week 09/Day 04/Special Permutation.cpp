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
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> f = {a};
        vector<int> l = {b};
        int hf = n / 2;

        for(int i = n; i > 0; i--)
        {
            if(i == a || i == b)
                continue;

            if(i > a && f.size() < hf)
                f.push_back(i);
            else
                l.push_back(i);
        }

        if(f.size() != hf || l.size() != hf)
        {
            cout << "-1\n";
            continue;
        }

        bool flag = true;

        for(int i = 0; i < hf; i++)
        {
            if(a > f[i])
            {
                flag = false;
                break;
            }
        }

        for(int i = 0; i < hf; i++)
        {
            if(b < l[i])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            for(auto it : f)
                cout << it << " ";
            for(auto it : l)
                cout << it << " ";
            cout << "\n";
        }
        else
            cout << "-1\n";
    }
}

