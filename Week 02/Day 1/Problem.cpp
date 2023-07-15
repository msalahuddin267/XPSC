//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while(t--)
//    {
//        int n, m, flag = 0;
//        cin >> n >> m;
//
//        if(n > m)
//        {
//            while(n > m)
//            {
//                n = n-1;
//                m = m+1;
//                if(n==m)
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//        }
//
//        else if(n < m)
//        {
//            while(1)
//            {
//                int ck = 0;
//                m = m-1;
//                n = n+3;
//                if(n==m)
//                {
//                    flag = 1;
//                    break;
//                }
//                if(n > m)
//                {
//                    while(n > m)
//                    {
//                        n = n-1;
//                        m = m+1;
//                        if(n==m)
//                        {
//                            flag = 1;
//                            ck = 1;
//                            break;
//                        }
//                        if(n < m) ck = 1;
//                    }
//                }
//                if(ck==1) break;
//            }
//        }
//
//        else
//            flag = 1;
//
//        if(flag == 1) cout << "YES" << endl;
//        else cout << "NO" << endl;
//    }
//}

// Both solution are accepted

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        if(n == m)
        {
            cout << "YES" << endl;
        }
        else
        {
            int dif = abs(n-m);
            if(dif % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
}

