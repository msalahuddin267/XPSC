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
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
        {
            int len;
            cin >> len;
            string s;
            cin >> s;

            for(int j = 0; j < len; j++)
            {
                if(s[j] == 'D')
                {
                    if(v[i] == 9)
                        v[i] = 0;
                    else
                        v[i]++;
                }
                else
                {
                    if(v[i] == 0)
                        v[i] = 9;
                    else
                        v[i]--;
                }
            }
        }
        for(int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
}
