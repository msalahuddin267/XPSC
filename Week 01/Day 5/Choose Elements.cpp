#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    priority_queue<long long> pq;
    long long ans = 0;

    while(n--)
    {
        int num;
        cin >> num;

        if(num > 0)
            pq.push(num);
    }

    while(k--)
    {
        if(pq.empty()) break;

        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
}
