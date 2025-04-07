#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n); 
        for(int i=0;i<n;i++)cin>>v[i];

        int mx=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(v[i]==0) {
                c++;
                mx=max(c,mx);
            }
            if(v[i]==1) c=0;
        }
        cout<<mx<<endl;

    }
    return 0;
}