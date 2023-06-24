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

        string s;
        cin >> s;

        for(int i = n-1; i >= 0; i++)
        {
            s[i] = s[i]+49;
        }
        cout <<s;
    }
}

