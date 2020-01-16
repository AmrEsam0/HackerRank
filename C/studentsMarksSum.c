#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, sum;
    char t;

    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf(" %c", &t);

    if (t == 'b')
    {
        sum = 0;
        for (int i = 0; i < n; i += 2)
        {
            sum += arr[i];
        }
    }
    else if (t == 'g')
    {
        sum = 0;
        for (int i = 1; i < n; i += 2)
        {
            sum += arr[i];
        }
    }

    printf("%d\n", sum);

    return 0;
}