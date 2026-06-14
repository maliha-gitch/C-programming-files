#include<stdio.h>
int *linearSearchAll(int arr[],int n,int target,int *count){
static int result[100];
 *count=0;
for(int i=0;i<n;i++){
    if(arr[i]==target){
        result[*count]=i;
        (*count)++;
    }
}
return result;
}

int main(){
int size;
int count=0;
int target=2;
printf("Enter the size");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    printf("%d value of : ",i);
    scanf("%d",&arr[i]);
}

int *indices = linearSearchAll(arr,size,target,&count);

for(int i=0;i<count;i++){
    printf("%d ",indices[i]);
}

if(count==0){
    printf("the target value never appear in array list ");
}
}
