#include <stdio.h>
int main()
{
int n = 9;
int i = 1;
int j;
for(j = i * 7; i < n / 2 && i != j; j = j - 1 + i)
{
j = j - 2 + i;
printf("i=%d, j=%d\n", i, j);
do{
j += 3, n--;
} while(j % 2 != 0);
if(i == 1) continue;
i++;
}
return 0;
}
