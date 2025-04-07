#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long>
#define f(i, n) for (int i = 0; i < n; i++)

void answer()
{
    string s;
    cin >> s;
    s.back()=s[0];
    cout<<s<<endl;
    // int n=s.length();
    // string p, q;
    // p = s;
    // q = s;
    // int x = 0, y = 0;
    // int ab = p.find("ab");
    // // if (ab != string::npos)
    // // {
    // //     x++;
    // //     p.erase(ab, 2);
    // // }
    // int ba = q.find("ba");
    // // if (ba != string::npos)
    // // {
    // //     y++;
    // //     q.erase(ba, 2);
    // // }

    // while (ab != string::npos)
    // {
    //     x++;
    //     // p.erase(ab, 2);
    //     p[ab]='x';
    //     ab = p.find("ab");
    // }
    // while (ba != string::npos)
    // {
    //     y++;
    //     // q.erase(ba, 2);
    //     q[ba]='x';
    //     ba = q.find("ba");
    // }
    // // cout<<x<<" "<<y<<endl;
    // if (x == y)
    //     cout << s << endl;

    
    // else if(x>y){
    //     int d=s.find("abb");
    //     if(d!=string::npos && x>y){
    //         s[d]='b';
    //         x--;
    //         d=s.find("abb");
    //     }
    //     if(x>y) {
    //         if(s[n-2]=='a' && s[n-1]=='b') s[n-1]='a';
    //     }
    //     cout<<s<<endl;
    // }
    // else if(x<y){
    //     int d=s.find("baa");
    //     if(d!=string::npos && x<y){
    //         s[d]='a';
    //         y--;
    //         d=s.find("baa");
    //     }
    //     if(x<y) {
    //         if(s[n-2]=='b' && s[n-1]=='a') s[n-1]='b';
    //     }
    //     cout<<s<<endl;
    // }

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