#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
        int rev=0;
        int n=x;
        while(n){
        int temp=(n%10+10)%10;
        rev = rev*10 + temp;cout<<temp<<endl;
        n=n/10;
        }
    return rev;
     if(x<0) {
    rev=rev*(-1);
    return rev;
    }  
    }

int main()
{
    int x;
    cin>>x;
    cout<<reverse(x);
    return 0;
}