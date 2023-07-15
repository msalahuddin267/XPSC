#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2, ans;
    getline(cin, s);

    stringstream ss(s);
    while(ss >> s2)
    {
        reverse(s2.begin(),s2.end());
        ans += s2;
        ans += " ";
        s2 = "";
    }

    ans.pop_back();
    cout << ans << endl;
}
