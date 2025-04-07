#include <bits/stdc++.h>

using namespace std;
#define N 1e18 + 10
int main() {
    // your code goes here
    // vector<long long> arr;
    // for (int i = 1; i < N; i++) {
    //     int j = i;
    //     int sum = 0;
    //     while (1) {
    //         while (j) {
    //             int temp = j % 10;
    //             sum += temp;
    //             j = j / 10;
    //         }
    //         if(sum<10) break;
    //         j=sum;
    //     }
    //   arr.push_back(sum); 
    // }
    // vector<long long> b;
    // b.push_back(arr[0]);
    // for(int i=1;i<arr.size();i++){
    //     b.push_back(arr[i]+arr[i-1]);
    // }
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        
        long long divi ;
        divi=n/9;
        long long rem = n%9;
        
        int sum = divi*45;
        for(int i=1;i<=rem;i++) sum+=i;
        
        // // cout<<b[n-1]<<endl;
        // long long sum=0;
        // // long long j=1;
        // for(int i=1;i<=n;i++){
        //     // if(j==10) j=1;
        //     // sum+=j;
        //     // j++;
        //     if(i%9==0) sum+=9;
        //     else sum+=i%9 ;
            
        // }
        cout<<sum<<endl;
    }
}