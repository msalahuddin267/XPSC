#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long ans = 0;
    priority_queue <int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ans += num;
        if(num % 2 == 1)
            pq.push(num);
    }
    if(ans % 2 == 1)
        ans = ans - pq.top();

    cout << ans << "\n";
}
