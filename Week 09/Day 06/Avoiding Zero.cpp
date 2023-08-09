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

        deque<int> d, ans;
        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            d.push_back(a);
            sum += a;
        }

        if(sum == 0)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            sum = 0;

            while(d.size())
            {
                int x = d.front();
                sum += x;
                d.pop_front();

                if(sum == 0)
                {
                    if(ans.size())
                    {
                        sum -= x;
                        d.push_front(x);
                        d.push_back(ans.back());
                        ans.pop_back();
                    }
                    else
                    {
                        sum -= x;
                        d.push_back(x);
                    }
                }

                else
                    ans.push_back(x);
            }

            for(auto it : ans)
                cout << it << " ";
            cout << "\n";
            ans.clear();
        }
    }
}
