#include<stdio.h>


void selection_sort(int arr[], int n)
{
    for(int i = 0;  i < n-1; i++)
    {
        /// i is the current element index
        /// assume the current element is the minimum element
        /// min element index = current element index

        int min_index = i;

        /// go through all the elements after current element and find the minimum element index
        for( int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[min_index])
            {
                /// update the min index if a smaller element is found
                min_index = j;
            }
        }
        if( arr[i] != arr[min_index])
        {
             /// Swap the current element with the minimum element
            int temp =  arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}
void print_array(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    //int arr[5] = {12,11, 13, 5, 6};

    printf("Enter size of the array: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Before Sorting: ");
    print_array(arr, n);

    selection_sort(arr, n);

    printf("After Sorting: ");
    print_array(arr, n);



}

