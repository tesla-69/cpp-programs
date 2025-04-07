#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for (int i = 0; i < n; i++)

void answer()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    // if (n == 1)
    // {
    //     cout << "no" << endl;
    //     return;
    // }

    int count = 0;
    f(i, n)
    {
        if (s[i] == '1')
            count++;
    }
    if (count % 2 == 1)
        cout << "no" << endl;
    else if (count != 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
            if (s[i] == '1' && s[i + 1] == '1')
            {
                cout << "no" << endl;
                return;
            }
        cout << "yes" << endl;
    }
    // string str;
    // for(int i=0;i<n;i++) str.push_back('0');
    // int i=0;
    // int j=n-1;
    // while(j-i>=2){
    //     if(s[i]=='1' && s[j]=='1')  {
    //         str[i]='1';
    //         str[j]='1';
    //         i++;j--;
    //     }
    //     else if(s[i]=='0' && s[j]=='0'){
    //         i++;j--;
    //     }
    //     else if(s[i]=='1' && s[j]=='0') j--;
    //     else i++;
    // }
    // if(i!=j && s[i]=='1' && s[j]=='1' && n>2) {
    //     str[i]='1';
    //     str[j]='1';
    // }
    // // cout<<str<<endl;
    // if(str==s) cout<<"yes"<<endl;
    // else cout<<"no"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        answer();
    }

    return 0;
}