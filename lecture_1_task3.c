#include<stdio.h>
/*
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int choice;
    scanf("%d",&choice);
    if(choice == 1){
        printf("%d",a+b);
        break;
    }
    else if(choice == 2)
    {
        printf("%d",a-b);

    }
    else if(choice == 3)
    {
        prinf("%d",a*b);
    }
    else if(choice == 4)
    {
        printf()
    }
}
*/

/*
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        printf("%d",a+b);
    case 2 :
         printf("%d",a-b);
    case 3 :
        printf("%d",a*b);
    case 4 :
        printf("%d",a/b);

    }

}
*/
/*
int main()
{
 int a = 9;
 switch(a)
 {
 case 5 :
    printf("a is equal to 5\n");
    break;//  // break na dile jekan theke true hoise er por theke sob e print hye jabe
 case 0 :
    printf("a is equal to 0");
    break;
 default :
    printf("default");
 }
}
*/
/*
int main(){
int X,Y;
printf("Enter the value of X and Y\n");
scanf("%d\n %d",&X,&Y);

if(X>Y){
    printf("%d is greater than %d",X,Y);
}
else if(X<Y)
{
    printf("%d is less than %d",X,Y);

}
else if(X == Y)
{
    printf("%d is equal to %d",X,Y);
}

}
*/
/*
int main()
{
int X,Y;
printf("Enter the value of X and Y\n");
scanf("%d\n %d",&X,&Y);
int choice;
    scanf("%d",&choice);

 switch(choice)
 {
 case 1:
     printf("%d is greater than %d",X,Y);
     break;
 case 2:
    printf("%d is less than %d",X,Y);
    break;
 default:
   printf("%d is equal to %d",X,Y);


 }
}
*/

int main()
{
    printf("Enter the Year:\n");
    int Year;
    scanf("%d",&Year);
    if(Year % 4 == 0 && Year % 100 != 0)
    {
        printf("Yes");
    }
    else if (Year % 400 == 0)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }

}
