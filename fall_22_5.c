#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("sample.txt","r");
    fp2=fopen("output.txt","w");
    int arr[100];
    int i;
    while(fscanf(fp1,"%d",&arr[i])!=EOF)
    {
        if(arr[i]%2==0)
        {
            fprintf(fp2,"%d",arr[i]);
        }
    }
    fclose(fp1);
    fclose(fp2);
}
