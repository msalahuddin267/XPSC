#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp = "";
    getline(cin, s);

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            reverse(temp.begin(),temp.end());
            cout << temp << " ";
            temp = "";
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    reverse(temp.begin(), temp.end());
    cout << temp << endl;
}
