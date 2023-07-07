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
        int n = 7;

        vector<long long> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        if(v[0] + v[1] + v[2] == v[6])
            cout << v[0] << " " << v[1] << " " << v[2] << "\n";

        else if(v[0] + v[1] + v[3] == v[6])
            cout << v[0] << " " << v[1] << " " << v[3] << "\n";

        else if(v[0] + v[2] + v[3] == v[6])
            cout << v[0] << " " << v[2] << " " << v[3] << "\n";
    }
}

