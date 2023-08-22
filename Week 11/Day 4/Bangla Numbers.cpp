#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int tc = 1;

    while(cin >> s)
    {
        cout << tc << ". ";
        tc++;

        if(s.size() == 1)
        {
            cout << s << "\n";
            break;
        }

        deque<string> d;

        string t = s.substr(s.size()-2);
        d.push_front(t);
        s.resize(s.size()-2);

        if(s.size())
        {
            t = s.substr(s.size()-1);
            s.resize(s.size()-1);
            t += " shata";
            d.push_front(t);
        }
        else
            break;

        //if(s.size())
    }
}
