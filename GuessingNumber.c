#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int player1=5;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]==player1){
        printf("player2 wins");
    }
    else{
        printf("chance left %d",n-i-1);
    }
}


}
