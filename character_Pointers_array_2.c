#include<stdio.h>
//void print(char *C)
//{
//    int i=0;
//    while(C[i]!='\0'){
//        printf("%c",C[i]);
//        i++;
//    }
//
//}
//int main()
//{
//    char c[20]="Hello";
//    print(c);
//}
void print(char*C){
while(*C!='\0'){
    printf("%c",*C);
    C++;
}
}
int main()
{
    char c[20]="Hello";
    print(c);
}
