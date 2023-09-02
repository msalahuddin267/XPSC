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

        string s;
        cin >> s;

        if(k % 2 == 0)
        {
            sort(s.begin(), s.end());
            cout << s << "\n";
            continue;
        }

        deque<char> evn, od;

        for(int i = 0; i < n; i++)
        {
            if(i & 1)
                od.push_back(s[i]);
            else
                evn.push_back(s[i]);
        }

        sort(evn.begin(), evn.end());
        sort(od.begin(), od.end());

        for(int i = 0; i < n; i++)
        {
            if(i & 1)
            {
                cout << od.front();
                od.pop_front();
            }
            else
            {
                cout << evn.front();
                evn.pop_front();
            }
        }
        cout << "\n";
    }
}
