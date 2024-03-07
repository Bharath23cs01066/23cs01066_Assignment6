#include <stdio.h>
int main()
{
    int n, m;
    printf("ENter no of elements in the first array");
    scanf("%d", &n);
    printf("ENter no of elements in the second array");
    scanf("%d", &m);
    int a1[n], a2[m];
    printf("Enter elements of first array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("Enter elements of second array");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &a2[i]);
    }
    if (m < n)
    {
        int count = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a2[i] == a1[j])
                {
                    count++;
                }
            }
        }
        if (count == m)
        {
            printf("A2 is a subset of A1");
        }
    }
    if (m > n)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a1[i] == a2[j])
                {
                    count++;
                }
            }
        }
        if (count == n)
        {
            printf("A1 is a subset of A2");
        }
    }
}