#include<stdio.h>
///value can be changed
void print(char*C){
    C[0]='A';
while(*C!='\0'){
    printf("%c",*C);
    C++;
}
}
int main()
{
    char c[20]="Hello";
    //c[0]='A';///Value cannot be change here
    print(c);
}

