#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int c=-1;
        for(int i=0;i<=8;i++){
            if(x.find(s)!=string::npos) {
                c=i;
                break;
            }
            string temp=x;
            x=x+temp;
        }
        cout<<c<<endl;
    }
    return 0;
}