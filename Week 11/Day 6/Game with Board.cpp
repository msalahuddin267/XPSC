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

        if(n == 2 || n == 3 || n == 4)
            cout << "Bob\n";

        else
            cout << "Alice\n";
    }
}
