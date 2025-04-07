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
        int a,b;
        cin>>a>>b;
        int cost=0;
        if(2*a > b){
            int c=n/2;
            if(n%2==1){

            cost+=a+c*b;
            }
            else{
                cost+=c*b;
            }
        }
        else{
            cost+=a*n;
        }
        cout<<cost<<endl;
    }
    return 0;
}