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
        vector<int> v;

        if(n >= 1 && n <= 9)
            cout << n;

        else
        {
            v.push_back(9);
            int digit = 8, sum = 9;
            while(1)
            {
                if(n-sum <= digit)
                {
                    v.push_back(n-sum);
                    break;
                }
                else
                {
                    sum += digit;
                    v.push_back(digit);
                    digit--;
                }
            }
        }
        reverse(v.begin(), v.end());

        for(auto it : v)
            cout << it;
        cout << "\n";
    }
}
