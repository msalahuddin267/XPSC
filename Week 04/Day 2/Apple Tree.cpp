#include<bits/stdc++.h>
using namespace std;

vector<int> v[200005];
int leaf[200005];
bool visited[200005];

int count_leaf(int src)
{
    visited[src] = true;
    int ans = 0;
    bool l = true;

    for(int i = 0; i < v[src].size(); i++)
    {
        if(!visited[v[src][i]])
        {
            l = false;
            ans += count_leaf(v[src][i]);
        }
    }
    if(l)
        return leaf[src] = 1;
    else
        return leaf[src] = ans;

}

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

        int e = n - 1;

        memset(visited, false, sizeof(visited));
        memset(leaf, 0, sizeof(leaf));

        while(e--)
        {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        count_leaf(1);

        int q;
        cin >> q;

        while(q--)
        {
            int x, y;
            cin >> x >> y;
            cout << leaf[x] * leaf[y] << "\n";
        }

        for(int i = 1; i <= n; i++)
            v[i].clear();
    }
}
