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

        if(n >= 1 && n <= 10) cout << "Lower Double\n";
        else if(n >= 11 && n <= 15) cout << "Lower Single\n";
        else if(n >= 16 && n <= 25) cout << "Upper Double\n";
        else cout << "Upper Single\n";
    }
}

