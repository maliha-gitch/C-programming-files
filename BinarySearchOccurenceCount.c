#include<stdio.h>
/// Accessding order
int binarSearchWithSortedArrayAesc(int arr[],int n,int target){
    int low_Index=0;
    int high_Index=n-1;
    int count=-1;
    while(low_Index<=high_Index){
            int mid_Index = (low_Index+high_Index)/2;
    if(arr[mid_Index]<target){
        low_Index=mid_Index+1;
    }
    else if(arr[mid_Index]==target){
    count=mid_Index;
    high_Index=mid_Index-1;
    }
else{
    high_Index=mid_Index-1;
}
    }
return count;
}


int binarSearchWithSortedArrayDesc(int arr[],int n,int target){
    int low_Index=0;
    int high_Index=n-1;
    int count=-1;
    while(low_Index<=high_Index){
            int mid_Index = (low_Index+high_Index)/2;
    if(arr[mid_Index]<target){
        low_Index=mid_Index+1;
    }
    else if(arr[mid_Index]==target){
    count=mid_Index;
    low_Index=mid_Index+1;

    }
else{
    high_Index=mid_Index-1;
}

    }
return count;
}



int TotalCountOccurence(int arr[],int n,int target){

int n1=binarSearchWithSortedArrayAesc(arr,n,target);///first occurence
int n2=binarSearchWithSortedArrayDesc(arr,n,target);/// last occurence
if(n1==-1){
    printf("Not found");
    return 0;
}

return n2-n1+1;
}


int main(){
int size;
int target=4;
printf("Enter the size");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    printf("%d value of : ",i);
    scanf("%d",&arr[i]);
}
int result = TotalCountOccurence(arr,size,target);
    printf("%d found",result);
}
