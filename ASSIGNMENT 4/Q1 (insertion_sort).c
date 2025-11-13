#include <stdio.h>

int main()
{
    int arr[50], n, i, j, temp, k;
    int p;

    printf("\nEnter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                for (k = i - 1; k >= j; k--)
                {
                    arr[k + 1] = arr[k];
                }
                arr[j] = temp;
                break;
            }
        }
        
        printf("\nAfter pass %d: ", i);
        for (p = 0; p < n; p++)
        {
            printf("%d ", arr[p]);
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
