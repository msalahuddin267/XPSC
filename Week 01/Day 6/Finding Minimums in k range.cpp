#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, flag = 0;
    cin >> n >> k;

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        pq.push(num);
        flag++;

        if(flag == k)
        {
            cout << pq.top() << " ";
            while(pq.size()) pq.pop();
            flag = 0;
        }
    }
    if(pq.size())
        cout << pq.top();
}
