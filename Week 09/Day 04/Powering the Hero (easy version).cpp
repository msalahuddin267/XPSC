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

        int a[n];
        long long army = 0;
        priority_queue<int> pq;

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
        {
            if(a[i] > 0)
            {
                pq.push(a[i]);
            }
            else
            {
                if(pq.size())
                {
                    army += pq.top();
                    pq.pop();
                }
            }
        }
        cout << army << "\n";
    }
}
