#include<stdio.h>
int linearSearchWithCondition(int arr[],int size,int target){
for(int i=0;i<size;i++){
    if(arr[i]>target){
       int result=arr[i];
        return result;
    }
}

return -1;

}
int main(){
    int size;
int target=6;
printf("Enter the size");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    printf("%d value of : ",i);
    scanf("%d",&arr[i]);
}
int indices = linearSearchWithCondition(arr,size,target);
printf("%d",indices);
if(indices==-1){
    printf("Not found");
}
}
