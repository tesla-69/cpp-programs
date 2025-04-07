#include<bits/stdc++.h>
using namespace std;

void stringSort(vector<string>&v,string &ans,int s,int e){
    if(s>=e) return ;

    int m=(s+e)/2;
    stringSort(v,ans,s,m);
    stringSort(v,ans,m+1,e);
    merge(v,ans,s,m,e);

}

void merge(vector<string>&v,string &ans,int s,int m,int e){
    int i=0;
    int j=m+1;
    while(i<=m && j<= e){
        
    }
}

int main()
{
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    string ans;
    stringSort(v,ans,0);
    return 0;
}