#include<stdio.h>
#include<string.h>
struct Character
{
    char name[50];
    int age;
    char house[30];
    int wizard_points;
};
int main()
{
    struct Character c[5];
    int i;
    // Input character information
    for(i = 0; i < 5; i++)
    {
        printf("Enter information for character %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", c[i].name);
        printf("Enter age: ");
        scanf("%d", &c[i].age);
        printf("Enter house: ");
        scanf(" %[^\n]", c[i].house);
        printf("Enter wizard points: ");
        scanf("%d", &c[i].wizard_points);
        printf("\n");
    }
    // Display all character information printf("\n===== Character Information =====\n"); 4
    for(i = 0; i < 5; i++)
    {
        printf("\nCharacter %d\n", i + 1);
        printf("Name: %s\n", c[i].name);
        printf("Age: %d\n", c[i].age);
        printf("House: %s\n", c[i].house);
        printf("Wizard Points: %d\n", c[i].wizard_points);
    }
    // Search character by name
    char search_name[50];
    int found = 0;
    printf("\nEnter character name to search: ");
    scanf(" %[^\n]", search_name);
    for(i = 0; i < 5; i++)
    {
        if(strcmp(c[i].name, search_name) == 0)
        {
            found = 1;
            printf("\nCharacter Found!\n");
            printf("Name: %s\n", c[i].name);
            printf("Age: %d\n", c[i].age);
            printf("House: %s\n", c[i].house);
            printf("Wizard Points: %d\n", c[i].wizard_points);
        }
    }
    if(found == 0)
    {
        printf("Character not found.\n");
    } // Average age calculation
    int sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum += c[i].age;
    }
    float average = (float)sum / 5;
    printf("\nAverage Age: %.2f\n", average);
    // Longest and shortest name
    int longest = 0;
    int shortest = 0;
    for(i = 1; i < 5; i++)
    {
        if(strlen(c[i].name) > strlen(c[longest].name))
        {
            longest = i;
        }
        if(strlen(c[i].name) < strlen(c[shortest].name))
        {
            shortest = i;
        }
    }
    printf("\nCharacter with Longest Name: %s\n", c[longest].name);
    printf("Character with Shortest Name: %s\n", c[shortest].name);
    return 0;
}
