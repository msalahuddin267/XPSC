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

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        int l = 0, r = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                l = i;
                break;
            }
        }

        for(int i = l-1; i >=0; i--)
        {
            if(b[i] <= b[i+1])
            {
                l = i;
            }
            else
                break;
        }

        for(int i = n-1; i >=0; i--)
        {
            if(a[i] != b[i])
            {
                r = i;
                break;
            }
        }

        for(int i = r+1; i < n; i++)
        {
            if(b[i] >= b[i-1])
            {
                r = i;
            }
            else
                break;
        }

        cout << l + 1 << " " << r + 1 << "\n";
    }
}
