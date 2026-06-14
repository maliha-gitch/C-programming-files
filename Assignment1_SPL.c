#include<stdio.h>
int main()
{
int n = 19;
int i = 0, value_final = 0;

for(i=n-4; i<=n; i++){
        printf("the value of i= %d and value_final = %d \n",i,value_final);
    value_final += i*i;
        printf("the value of i= %d and value_final = %d \n",i,value_final);

    ++i;
            printf("the value of i= %d and value_final=%d\n",i,value_final);

}
}
//Output :
////the value of i= 15 and value_final = 0
////the value of i= 15 and value_final = 225
////the value of i= 16 and value_final=225
////the value of i= 17 and value_final = 225
////the value of i= 17 and value_final = 514
////the value of i= 18 and value_final=514
////the value of i= 19 and value_final = 514
////the value of i= 19 and value_final = 875
////the value of i= 20 and value_final=875
