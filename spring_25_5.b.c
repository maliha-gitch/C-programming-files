#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    fp1=fopen("input.txt","r");
    float arr[100];
    int i=0;
    float sum=0,count=0;
    while(fscanf(fp1,"%f",&arr[i])!=EOF)
    {
        sum+=arr[i];
        count++;
        i++;
    }
    float avg = sum/count;
    fp2=fopen("output.txt","w");
    fprintf(fp2,"%f",avg);
    fclose(fp1);
    fclose(fp2);
}
