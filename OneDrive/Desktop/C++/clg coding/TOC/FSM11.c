#include <stdio.h>
int main()
{
    int n;
    printf("Enter the length of binary string: ");
    scanf("%d", &n);
    char a[n];
    if (n < 2)
    {
        printf("No\n");
        return 0;
    }
    printf("Enter input: ");
    scanf("%s", a);
    if (a[0] == '1' && a[1] == '1')
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}