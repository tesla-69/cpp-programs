#include <iostream>
using namespace std;

class isEvenOdd
{
private:
    int x;

public:
    isEvenOdd()
    {
        cout << "Enter the number:";
        cin >> x;
    }
    bool check()
    {
        if (x % 2 == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    isEvenOdd a;
    if (a.check())
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}