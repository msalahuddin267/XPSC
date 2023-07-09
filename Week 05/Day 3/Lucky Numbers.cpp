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
        int l, r, num = 0, dif = -1;
        cin >> l >> r;

        for(int i = l; i <= r; i++)
        {
            string s = to_string(i);
            sort(s.begin(), s.end());

            int luc = (s[s.size()-1]-'0') - (s[0]-'0');

            if(luc == 9)
            {
                num = i;
                break;
            }

            if(luc > dif)
            {
                dif = luc;
                num = i;
            }
        }
        cout << num << "\n";
    }
}
