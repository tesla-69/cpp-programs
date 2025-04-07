#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a[26] = {0};
        for (int i = 0; i < n; i++)
        {
            a[s[i]-'a']++;
        }
        int p = n - k;
        int count = 0;
        // sort(a,a+26);

        for(int i=0;i<26;i++){
            if(a[i]%2==1) count++;;
        }
        if(count<=k+1) cout<<"yes"<<endl;
        else cout<<"no"<<endl;



    //     if(a[25]>=p) {
    //         cout<<"YES"<<endl;
    //         continue;
    //     }
    //     if (p % 2 == 0)
    //     {
    //         for (int i = 0; i < 26; i++)
    //         {
    //             if (a[i] > 0 && a[i] % 2 == 0 && a[i] <= p && count <= p)
    //             {
    //                 if (a[i] + count <= p)
    //                     count += a[i];
    //             }
    //         }
    //     }
    //     else
    //     {
    //         for (int i = 0; i < 130; i++)
    //         {
    //             if (a[i] > 0 && a[i] % 2 == 0 && a[i] <= p && count <= p)
    //             {
    //                 if (a[i] + count <= p)
    //                     count += a[i];
    //             }
    //         }

    //     }
    //     if (count == p)
    //         cout << "YES" << endl;
    //     else
    //         cout << "NO" << endl;
    }

    


    return 0;
}