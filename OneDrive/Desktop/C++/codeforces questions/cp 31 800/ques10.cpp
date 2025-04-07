#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){

    
    char arr[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin >> arr[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            // if (i == 0 || i == 9 || j == 0 || j == 9)
            //     count++;
            // else if ((i == 2 && (j >= 2 && j <= 7)) || (i == 7 && (j >= 2 && j <= 7)) || (j == 2 && (i >= 2 && i <= 7)) || (j == 7 && (i <= 2 && i <= 7)))
            //     count += 3;
            // else if (((i == 4 || i == 5) && (j == 4 || j == 5)))
            //     count += 5;
            // else if ()
            if (arr[i][j] == 'X')
            {
                count += min({i, 9 - i, j, 9 - j}) + 1;
            }
        }
    }
    cout << count << endl;
    }
    return 0;
}