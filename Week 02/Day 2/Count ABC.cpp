#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    string s;

    cin >> n >> s;
    for(int i = 0; i < s.size()-2; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C')
            ans++;
    }
    cout << ans << "\n";

//    int n, ans = 0;
//    cin >> n;
//
//    string s;
//    cin >> s;
//
//    while(s.find("ABC") != string :: npos)
//    {
//        ans++;
//        s = s.substr(s.find("ABC")+3);
//    }
//    cout << ans << "\n";
}
