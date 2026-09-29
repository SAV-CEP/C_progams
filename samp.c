#include <stdio.h>

#define MAX 100

// Function declarations
void insert(int arr[], int *n);
void display(int arr[], int n);
void linearSearch(int arr[], int n);
void binarySearch(int arr[], int n);
void sort(int arr[], int n);

int main()
{
    int arr[MAX], n = 0;
    int choice;

    do
    {
        printf("\n--- ARRAY OPERATIONS ---\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Linear Search\n");
        printf("4. Binary Search\n");
        printf("5. Sort\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert(arr, &n);
                break;

            case 2:
                display(arr, n);
                break;

            case 3:
                linearSearch(arr, n);
                break;

            case 4:
                binarySearch(arr, n);
                break;

            case 5:
                sort(arr, n);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}

// Insert elements into array
void insert(int arr[], int *n)
{
    int value;

    if (*n >= MAX)
    {
        printf("Array is full!\n");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &value);

    arr[*n] = value;
    (*n)++;

    printf("Element inserted successfully.\n");
}

// Display array
void display(int arr[], int n)
{
    int i;

    if (n == 0)
    {
        printf("Array is empty.\n");
        return;
    }

    printf("Array elements: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Linear search
void linearSearch(int arr[], int n)
{
    int key, i;

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at position %d.\n", i + 1);
            return;
        }
    }

    printf("Element not found.\n");
}

// Binary search
void binarySearch(int arr[], int n)
{
    int key, low = 0, high = n - 1, mid;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element found at position %d.\n", mid + 1);
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

    printf("Element not found.\n");
}

// Bubble sort
void sort(int arr[], int n)
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

    printf("Array sorted successfully.\n");
}

