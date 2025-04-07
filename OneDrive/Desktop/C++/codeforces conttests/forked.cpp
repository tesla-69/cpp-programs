#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;
        int c1=(x2-x1)/2;
        int c2=(y2-y1)/2;

        if(x1==x2 || y1==y2){

            if(a==b && ((x2-x1)/2>a ||(y2-y1)/2>b)) cout<<"2"<<endl;
            else cout<<"no";
        }

    }
    return 0;
}