#include <stdio.h>

void merge(int a[], int n1, int b[], int n2, int c[])
{

 int i = 0;
 int j = 0;
 int k = 0;

 while (i < n1 && j < n2)
 {
   if (a[i] < b[j])
    {
      c[k] = a[i];
      i++;
    }
   else
    {
      c[k] = b[j];
      j++;
    }

    k++;
 }


 while (i < n1)
 {
   c[k] = a[i];
   i++;
   k++;
 }


 while (j < n2)
 {
   c[k] = b[j];
   j++;
   k++;
 }
}

void main()
{
    int a[100], b[100], c[200];
    int n1, n2;
    int i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first sorted array:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second sorted array:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }


    merge(a, n1, b, n2, c);    

    printf("Merged sorted array:\n");

    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }


}

