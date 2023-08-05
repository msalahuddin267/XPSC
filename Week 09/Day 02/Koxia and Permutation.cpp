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
        int n, k;
        cin >> n >> k;

        deque<int> d;

        for(int i = 1; i <= n; i++)
            d.push_back(i);

        while(d.size())
        {
            cout << d.back() << " ";
            d.pop_back();

            if(d.size())
            {
                cout << d.front() << " ";
                d.pop_front();
            }
        }
        cout << "\n";
    }
}
