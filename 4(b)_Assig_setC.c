#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    int index1=0;
    int index2=0;
      for(int i=0;i<n;i++){
         if(arr[i]>max){
            max=arr[i];
            index1=i;
         }
         else if(arr[i]<min){
            min=arr[i];
            index2=i;
         }
    }
    printf("%d %d",max,index1);
      printf("%d %d",min,index2);

}
