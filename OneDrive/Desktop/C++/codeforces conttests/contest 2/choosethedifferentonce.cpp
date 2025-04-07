#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        // sort(a, a + n);
        // sort(b, b + m);
        set<int> a1;
        set<int> b1;
        for (int i = 0; i < n; i++)
            a1.insert(a[i]);
        for (int i = 0; i < m; i++)
            b1.insert(b[i]);

        int ans[k+m+n];
        int c=0;
        for(auto i:a1){
            if(c>=k/2) {
            }
            else {
                ans[c]=i;
            }
            c++;
        }
        c=k/2;
        for(auto i:b1){
            if(c>=k) {
            }
            else {
                ans[c]=i;
            }
            c++;
        }
        set<int> ans1;

        // for(int i=0;i<k/2;i++)ans[i]=a1[i];
        // for(int i=0;i<k/2;i++)ans[(k/2)+i]=b1[i];
        sort(ans,ans+k);
        int count=0;
        for(int i=1;i<=k;i++){
            if(ans[i-1]==i) {
                count++;
                continue ;
            }
            else break;
        }
        if(count==k) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

    return 0;
}