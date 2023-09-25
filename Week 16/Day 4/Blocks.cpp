#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s, temp;
    cin >> s;

    temp = s;
    vector<int> ans;

    for(int i = 0; i < n-1; i++)
    {
        if(temp[i] == 'W')
        {
            temp[i] = 'B';
            ans.push_back(i+1);

            if(temp[i+1] == 'W')
                temp[i+1] = 'B';
            else
                temp[i+1] = 'W';
        }
    }

    bool flag = true;

    for(int i = 0; i < n; i++)
    {
        if(temp[i] == 'W')
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        cout << ans.size() << "\n";
        for(auto it : ans)
            cout << it << " ";
    }

    else
    {
        temp = s;
        ans.clear();

        for(int i = 0; i < n-1; i++)
        {
            if(temp[i] == 'B')
            {
                temp[i] = 'W';
                ans.push_back(i+1);

                if(temp[i+1] == 'B')
                    temp[i+1] = 'W';
                else
                    temp[i+1] = 'B';
            }
        }

        flag = true;

        for(int i = 0; i < n; i++)
        {
            if(temp[i] == 'B')
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << ans.size() << "\n";
            for(auto it : ans)
                cout << it << " ";
        }

        else
            cout << "-1\n";
    }
}
