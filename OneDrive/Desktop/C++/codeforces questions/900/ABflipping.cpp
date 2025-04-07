#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // int a[n] = {0};
        // int i = 0;
        // int c = 0;
        // while (i < n - 1)
        // {
        //     if (a[i] == 0 && (s[i] == 'A' && s[i + 1] == 'B'))
        //     {
        //         swap(s[i], s[i + 1]);
        //         a[i] = 1;
        //         // cout << i << " ";
        //         i = 0;
        //         c++;
        //     }
        //     else
        //         i++;
        // }
        // cout << c << endl;
        int a=-1;
        int b=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='A') {
                a=i;break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B') {
                b=i;break;
            }
        }
        if(a==-1||b==-1||a>b){
            cout<<"0"<<endl;
        }
        else cout<<b-a<<endl;
    }
    return 0;
}