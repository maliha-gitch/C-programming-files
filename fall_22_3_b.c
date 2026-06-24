#include<stdio.h>

int main()
{
    char str[200], sub[100];
    int i, j, found = 0;

    printf("Main string: ");
    gets(str);

    printf("Substring: ");
    gets(sub);

    for(i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while(sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if(sub[j] == '\0')
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Substring matches\n");
    else
        printf("Substring does not match\n");

    return 0;
}
