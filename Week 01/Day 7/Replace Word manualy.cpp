#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp = "";
    cin >> s;

    vector<string> v;
    int i = 0;
    while(i < s.size())
    {
        if((i + 4 < s.size()) && (s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y' && s[i+3]=='P' && s[i+4]=='T'))
        {
            v.push_back(temp);
            v.push_back(" ");
            i += 5;
            temp = "";
        }
        else
        {
            temp += s[i];
            i++;
        }
    }
    v.push_back(temp);
    for(auto it : v)
        cout << it;
}

