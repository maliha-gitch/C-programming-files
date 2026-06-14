#include<stdio.h>
int linearSearch(int arr[],int n,int target){
    int result[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            result[count]=i;
            count++;
            return result;
        }
    }
    return -1;
}
int main(){
int size;
int target;
printf("Enter the size");
scanf("%d",&size);
printf("Enter the target value");
scanf("%d",&target);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    printf("value of %d index %d",i,arr[i]);
}
int result=linearSearch(arr,size,target);
if(result!=-1){
    printf("Found %d",result);
}
else{
    printf("Not found");
}

}
