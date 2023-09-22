#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    priority_queue<int> pq;
    deque<int> ans;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    while(pq.size())
    {
        int a = pq.top();
        pq.pop();
        ans.push_front(a);

        if(pq.size())
        {
            a = pq.top();
            pq.pop();
            ans.push_back(a);
        }
    }

    for(auto it : ans)
        cout << it << " ";
    cout << "\n";
}
