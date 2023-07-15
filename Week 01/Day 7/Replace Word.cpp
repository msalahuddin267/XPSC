#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while(1)
    {
        if(s.find("EGYPT") != string :: npos)
        {
            int index = s.find("EGYPT");
            s.replace(index, 5, " ");
        }
        else
            break;
    }
    cout << s << endl;
}
