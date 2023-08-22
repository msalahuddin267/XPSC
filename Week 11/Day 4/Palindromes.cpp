#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool is_palindrome(string s)
{
    string temp = s;
    reverse(temp.begin(), temp.end());

    if(temp == s)
        return true;
    else
        return false;
}

bool is_mirrored(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0')
            s[i] = 'O';
    }
    int i = 0, j = s.size() - 1;
    set<char> st = {'4', '6', '7', '9', 'B', 'C', 'D', 'F', 'G', 'K', 'N', 'P', 'Q', 'R'};
    set<char> st2 = {'4', '6', '7', '9', 'B', 'C', 'D', 'F', 'G', 'K', 'N', 'P', 'Q', 'R', 'E', '3', 'J', 'L', 'S', '2', 'Z', '5'};

    while(i < j)
    {
        if(s.size() & 1)
        {
            int m = s.size() / 2;
            if(st2.find(s[m]) != st2.end())
            return false;
        }

        if(st.find(s[i]) != st.end())
            return false;

        else if((s[i] == 'A' && s[j] != 'A') || (s[i] == 'E' && s[j] != '3') || (s[i] == '3' && s[j] != 'E') || (s[i] == 'H' && s[j] != 'H') || (s[i] == 'I' && s[j] != 'I') || (s[i] == 'J' && s[j] != 'L') || (s[i] == 'L' && s[j] != 'J') || (s[i] == 'M' && s[j] != 'M') || (s[i] == 'S' && s[j] != '2') || (s[i] == '2' && s[j] != 'S') || (s[i] == 'T' && s[j] != 'T') || (s[i] == 'U' && s[j] != 'U') || (s[i] == 'V' && s[j] != 'V') || (s[i] == 'Y' && s[j] != 'Y') || (s[i] == 'Z' && s[j] != '5') || (s[i] == '5' && s[j] != 'Z') || (s[i] == 'E' && s[j] != '3') || (s[i] == '1' && s[j] != '1') || (s[i] == '8' && s[j] != '8') || (s[i] == 'O' && s[j] != 'O'))
            return false;

        i++;
        j--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    while(cin >> s)
    {
        if(is_palindrome(s) && is_mirrored(s))
            cout << s << " -- is a mirrored palindrome.\n";

        else if(is_palindrome(s))
            cout << s << " -- is a regular palindrome.\n";

        else if(is_mirrored(s))
            cout << s << " -- is a mirrored string.\n";

        else
            cout << s << " -- is not a palindrome.\n";
    }
}
