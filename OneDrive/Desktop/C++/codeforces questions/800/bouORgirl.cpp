#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int count=1;
    string s;
    cin>>s;
    set<char> st(begin(s),end(s));
    // for(auto i:st) {
    //     cout<<i;
    // }
    
    if(st.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else cout<<"IGNORE HIM!";
    
    return 0;
}