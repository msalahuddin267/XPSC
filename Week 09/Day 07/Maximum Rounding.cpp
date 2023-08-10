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
        bool flag = true;

        for(int i = 0; i < s.size(); i++)
        {
            d.push_back(s[i]);

            if(s[i] >= '5')
                flag = false;
        }

        if(flag)
        {
            cout << s << "\n";
            continue;
        }

        if(s[0] >= '5')
        {
            cout << '1';
            int x = s.size();
            while(x--)
                cout << '0';
            cout << "\n";
            continue;
        }

        d.push_front('0');
        deque<char> cpy = d;

        for(int i = d.size() - 1; i >= 0; i--)
        {
            if(d[i] >= '5')
                d[i-1]++;
        }

        if(d.front() == '0')
        {
            d.pop_front();
            cpy.pop_front();
        }

        for(int i = 0; i < d.size(); i++)
        {
            if(d[i] != cpy[i])
            {
                for(int j = i+1; j < d.size(); j++)
                    d[j] = '0';
                break;
            }
        }

        for(auto it : d)
            cout << it;
        cout << "\n";
    }
}
