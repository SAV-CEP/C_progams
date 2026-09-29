#include <stdio.h>

void bubblesort(int arr[], int n)
{
   int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void linearSearch(int arr[], int n, int key)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Linear Search: Element found at position %d\n", i + 1);
            return;
        }
    }

    printf("Linear Search: Element not found\n");
}

void binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Binary Search: Element found at position %d\n", mid + 1);
            return;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Binary Search: Element not found\n");
}

void display(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

void main()
{
    int arr[100], n, i, key, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);


    do{
    printf("\n----- MENU -----\n");
    printf("1. Linear Search\n");
    printf("2. Bubble Sort\n");
    printf("3. Binary Search\n");
    printf("4. Display\n");
    printf("5. exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
            linearSearch(arr, n, key);
            break;

        case 2:
            bubblesort(arr, n);

            printf("Sorted array: ");
            display(arr, n);
            break;

        case 3:
            bubblesort(arr, n);

            printf("Sorted array: ");
            display(arr, n);

            binarySearch(arr, n, key);
            break;
            
        case 4:
            display(arr, n);
            break;
            
        case 5:
            printf("The program is terminated \n");            
            break;
            
        default:
            printf("Invalid choice\n");
    }
    }while(choice !=5);


}

