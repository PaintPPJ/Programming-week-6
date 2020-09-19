#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i, j,n;
    scanf("%d", &n);
    if (n > 2) {
        for (i = 2; i <= n; i++)
        {
            for (j = 2; j <= (i / j); j++)
            {
                if (!(i % j))
                {
                    break;
                }
            }
            if (j > (i / j))
            {
                printf("%d", i);
                printf("\n");
            }

        }
    }
    else
    {
        printf("Can't find prime number.");
    }
    return 0;
}
