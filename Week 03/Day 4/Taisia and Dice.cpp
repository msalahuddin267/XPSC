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
        int n, s, r;
        cin >> n >> s >> r;

        vector<int> v;
        int rem = n-1;
        int rem2 = r % rem;

        v.push_back(s-r);

        for(int i = 0; i < rem; i++)
        {
            v.push_back(r / rem);
        }

        int k = 1;
        while(rem2--)
        {
            v[k]++;
            k++;
        }

        for(auto it : v)
            cout << it << " ";
        cout << "\n";
    }
}
