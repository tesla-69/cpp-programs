#include<bits/stdc++.h>
using namespace std;

void subSeq(string s , string op ,int n, int i){
    if(i==n) {
        cout<<op<<" ";
        return ;
    }
    subSeq(s,op,n,i+1);
    
    op=op+s[i];
    subSeq(s,op,n,i+1);
    
}

int main()
{
    string s="abcd";
    string output="";
    int i=0,n=4;
    subSeq(s,output,n,i);
    return 0;
}