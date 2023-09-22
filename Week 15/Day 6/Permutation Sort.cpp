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
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++)
            cin >> v[i];

        bool flag = true;

        for(int i = 0; i < n-1; i++)
        {
            if(v[i] > v[i+1])
            {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "0\n";

        else
        {
            if(v.front() == 1 || v.back() == n)
                cout << "1\n";

            else if(v.front() == n && v.back() == 1)
                cout << "3\n";

            else
                cout << "2\n";
        }
    }
}
