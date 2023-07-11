#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, sum = 0, cnt = 0;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if(v[i] == 2)
                cnt++;
        }

        if(sum % 2 == 1)
            cout << "NO\n";
        else
        {
            if(n % 2 == 1 && cnt == n)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}

