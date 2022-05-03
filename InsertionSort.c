#include <stdio.h>

int main()
{

    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    printf("The sorted array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }

    return 0;
}