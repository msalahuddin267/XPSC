#include<bits/stdc++.h>
using namespace std;

int find_distance(string s1, string s2)
{
    int dist = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        dist += abs((s1[i]-'a') - (s2[i]-'a'));
    }
    return dist;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n, m, mini = INT_MAX;
        cin >> n >> m;

        vector<string> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];

        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                int dist = find_distance(v[i], v[j]);
                mini = min(mini, dist);
            }
        }
        cout << mini << "\n";
    }
}


