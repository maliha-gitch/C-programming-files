//Mr. Y is having a wonderful LaLiga season. He is scoring goals in almost each match.
//He has appointed you to calculate the statistics of this season.
//Now, write a c program based on the following requirements:
 //i. Write a function inputData(int goals[ ], int mins[ ], int n), where n is the number of matches played;
// goals and mins arrays store the number of goals scored and minutes played for all the matches.
// ii. Write a function countOfHattricks(int goals[ ], int n), which will find and return the number of hattricks (3 or more than 3 goals in a match)
//the player scored in n number of matches.
 //iii. In the main() function
//, declare and initialize the variables and arrays as needed. Also, call each function at least once.
#include <stdio.h>

// Function to take input
void inputData(int goals[], int mins[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("Match %d\n", i + 1);

        printf("Goals scored: ");
        scanf("%d", &goals[i]);

        printf("Minutes played: ");
        scanf("%d", &mins[i]);
    }
}

// Function to count hattricks
int countOfHattricks(int goals[], int n)
{
    int i;
    int count = 0;

    for(i = 0; i < n; i++)
    {
        if(goals[i] >= 3)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;

    printf("Enter number of matches played: ");
    scanf("%d", &n);

    int goals[n];
    int mins[n];

    // Function call for input
    inputData(goals, mins, n);

    // Function call for counting hattricks
    int hattricks = countOfHattricks(goals, n);

    printf("\nTotal Hattricks: %d\n", hattricks);

    return 0;
}
