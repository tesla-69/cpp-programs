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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if(a[0]!=1) {
            cout<<"NO"<<endl;
            continue;
        }
        int b[n];
        for (int i = 0; i < n; i++)
            b[i] = a[i];
        sort(b, b + n);
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        if (s.size() == n && b[n - 1] == n)
        {
            for (int i = 1; i < n - 1; i++)
            {
                for (int j = 1; j < n - 1; j++)
                {
                    if (a[j] > a[j - 1] && a[j] > a[j + 1])
                        swap(a[j], a[j + 1]);
                }
            }
            int x=0;
            for(int i=0;i<n;i++){
                if(a[i]==b[i])continue;
                else {
                    x=-1;
                    break;
                }
            }
            if(x==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}