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
        string a, b;
        cin >> a >> b;

        if(a.size() > b.size())
        {
            cout << "NO\n";
            continue;
        }

        vector<string> va, vb;
        bool flag = true;

        for(int i = 0; i < a.size(); i++)
        {
            string s;
            s += a[i];

            if(i + 1 < a.size() && a[i] == a[i+1])
            {
                while(i + 1 < a.size() && a[i] == a[i+1])
                {
                    s += a[i+1];
                    i++;
                }
            }
            va.push_back(s);
        }

        for(int i = 0; i < b.size(); i++)
        {
            string s;
            s += b[i];

            if(i + 1 < b.size() && b[i] == b[i+1])
            {
                while(i + 1 < b.size() && b[i] == b[i+1])
                {
                    s += b[i+1];
                    i++;
                }
            }
            vb.push_back(s);
        }

        if(va.size() != vb.size())
        {
            cout << "NO\n";
            continue;
        }

        for(int i = 0; i < va.size(); i++)
        {
            if(va[i].size() > vb[i].size() || va[i].front() != vb[i].front())
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
