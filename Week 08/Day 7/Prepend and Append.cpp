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
        string s;

        cin >> n >> s;

        if(s.size() == 0)
            cout << "0\n";

        else if(s.size() == 1)
            cout << "1\n";

        else
        {
            deque<char> d(n);

            for(int i = 0; i < n; i++)
                d[i] = s[i];

            while(d.size() >= 2 && d.front() != d.back())
            {
                d.pop_back();
                d.pop_front();
            }

            cout << d.size() << "\n";
        }
    }
}
