#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a;
    cin >> a;

    int num = a;
    if(a + 0.5 < num + 1)
        cout << num << endl;
    else
        cout << num + 1 << endl;
}

//int main()
//{
//    float a;
//    cin >> a;
//
//    cout << round(a) << endl;
//}
