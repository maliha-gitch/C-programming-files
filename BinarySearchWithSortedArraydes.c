#include<stdio.h>
/// Accessding order
int binarSearchWithSortedArrayDes(int arr[],int n,int target){
    int low_Index=0;
    int high_Index=n-1;
    while(low_Index<=high_Index){
            int mid_Index = (low_Index+high_Index)/2;
    if(arr[mid_Index]>target){
        low_Index=mid_Index+1;
    }
    else if(arr[mid_Index]==target){
        return 1;
    }
else{
    high_Index=mid_Index-1;
}

    }
return -1;
}
int main(){
int size;
int target=7;
printf("Enter the size");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    printf("%d value of : ",i);
    scanf("%d",&arr[i]);
}
int result = binarSearchWithSortedArrayDes(arr,size,target);
if(result==1){
    printf("%d found",result);
}
else{
    printf("not found");
}


}

