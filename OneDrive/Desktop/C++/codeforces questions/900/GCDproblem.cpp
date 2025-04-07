#include <bits/stdc++.h>
using namespace std;

#define n 1e5

int main()
{
    double a[n];
    // long long a[n] = {0};
    vector<int> v;
    for (int i = 2; i * i < n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i * i; j < n; j += i)
            {
                a[j] = 1;
                v.push_back(j);
            }
        }
    }
    for (auto i : v)
        cout << i << " ";
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     int a,b,c;
    //     for(auto i : v){

    //     }

    // }
    return 0;
}