#include<stdio.h>
int main()
//{
//    int n=8396;
//    while(n!=0){
//        int rem = n%10;
//        n=n/10;
//        int rem2 = n%10;
//        printf("%d\n",rem2-rem);
//    }
//}
{


int i, j, k=11, p=1;
int A[3][4]={12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
for(i=0;i<3; i++){
for(j=0; j<4; j++){
if(k>=1){
A[i][j]=A[i][j]-k;
k=k-2;
}
else{
A[i][j]=A[i][j]+p;
p=p+2;
}
printf("%d ", A[i][j]);
}
printf("\n");
}
}
