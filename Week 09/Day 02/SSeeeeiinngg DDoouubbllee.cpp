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
        string s;
        cin >> s;

        deque<char> d;

        for(int i = 0; i < s.size(); i++)
        {
            d.push_front(s[i]);
            d.push_back(s[i]);
        }

        for(auto it : d)
            cout << it;
        cout << "\n";
    }
}

