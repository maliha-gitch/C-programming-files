//#include<stdio.h>
//
//int main()
//{
//    int b, A[10], sum = 0;
//
//    b = (81 % 21) + 5;
//
//    for(int i = 0; i < 10; i++)
//    {
//        A[i] = b % 7 + 3 * i;
//        if(i%2==0){
//            sum+=A[i];
//        }
//    }
//
//    printf("Sum of even indexed elements = %d\n", sum);
//
//    return 0;
//}
#include<stdio.h>
int main() {
int arr1[5] = {1,2,3,4,5};
int arr2[5] = {5,4,3,2,1};
int arr3[5];
int m=0, n=0;
int i, j;
for(i=0;i<5; i++) {
for(j=0;j<5;j++) {
if(arr1[i]==arr2[j]) {
n++;
m = arr1[i];
arr3[i]=m;
}
}
//printf("Output - 1\n");
printf("%d : \n", n);
}
//printf("Output - 2\n");
for(i=4;i>=0; i--) {
printf("%d : \n", arr3[i]);
}
return 0;
}
















