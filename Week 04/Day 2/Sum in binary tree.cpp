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
        long long n;
        cin >> n;

        long long sum = n;

        while(n != 1)
        {
            n = n / 2;
            sum += n;
        }
        cout << sum << "\n";
    }
}

