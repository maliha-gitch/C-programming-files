#include<stdio.h>

void selection_sort_asc(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int min = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
                min = j;
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void selection_sort_desc(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        int max = i;

        for(int j = i+1; j < n; j++)
        {
            if(arr[j] > arr[max])
                max = j;
        }

        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int even[n], odd[n];
    int e = 0, o = 0;

    // separate
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    // selection sort
    selection_sort_asc(even, e);
    selection_sort_desc(odd, o);

    // merge back
    e = 0; o = 0;
    for(int i=0; i<n; i++)
    {
        if(i % 2 == 0)
            arr[i] = even[e++];
        else
            arr[i] = odd[o++];
    }

    // print
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
