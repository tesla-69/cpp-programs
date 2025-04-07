#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        // if (a > b + c)
        //     cout << "First" << endl;
        // else if (a >= b + c || a + c == b)
        //     cout << "Second" << endl;
        // else
        // {
        //     while (1)
        //     {
        //         if (a)
        //             a--;
        //         else
        //         {
        //             c--;
        //         }
        //         if (c == 0 && b == 0)
        //         {
        //             cout << "First" << endl;
        //             break;
        //         }
        //         else if (c == 0 && b > 0)
        //         {
        //             cout << "Second" << endl;
        //             break;
        //         }
        //         if (b)
        //             b--;
        //         else
        //         {
        //             c--;
        //         }
        //         if (c == 0 && a == 0)
        //         {
        //             cout << "Second" << endl;
        //             break;
        //         }
        //         else if (c == 0 && a > 0)
        //         {
        //             cout << "First" << endl;
        //             break;
        //         }
        //     }
        // }

        // if (a > b + c)
        //     cout << "First" << endl;
        // else if (a == b && c % 2 == 1)
        //     cout << "First" << endl;
        // else if ((a + c - b) % 2 == 1)
        //     cout << "First" << endl;
        // else
        //     cout << "Second" << endl;

        if(c%2==0) {
            if(a>b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(a>=b) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }


    }

    return 0;
}