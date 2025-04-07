#include<iostream>
using namespace std;

int main()
{
    int t; int n,m; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        char c[n][m];
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>c[i][j];
            }
        }
        
        // for (int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<c[i][j];
        //     }
        // }
        cout<<c[n][m];
    }
    


    return 0;
}