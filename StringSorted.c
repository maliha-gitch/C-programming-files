#include<stdio.h>
#include<string.h>

void insertion_sort_strings(char arr[][100], int n)
{
    for(int i = 1; i < n; i++)
    {
        char key[100];
        strcpy(key, arr[i]); // copy string

        int j = i - 1;

        // compare by length
        while(j >= 0 && strlen(arr[j]) > strlen(key))
        {
            strcpy(arr[j + 1], arr[j]);
            j--;
        }

        strcpy(arr[j + 1], key);
    }
}

void print_array(char arr[][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][100];

    for(int i = 0; i < n; i++)
    {
        scanf("%s", arr[i]);
    }

    insertion_sort_strings(arr, n);

    print_array(arr, n);

    return 0;
}
