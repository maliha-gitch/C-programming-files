#include<stdio.h>
#include<stdlib.h>

struct Node
{
    char data;
    struct Node* next;
};
struct Node* tos=NULL;
struct Node* create_at_new_node(int data)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
};
int isEmpty()
{
    if(tos==NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(char newdata)
{
    struct Node* newNode=create_at_new_node(newdata);
    if(tos==NULL){
        tos=newNode;
    }
    else{
        newNode->next=tos;
        tos=newNode;
    }
}
char top()
{

    if(tos==NULL)
       {
           printf("stack is empty");
           return -1;
       }
       else{
            return tos->data;

       }
}

char pop()
{

    if(isEmpty()==1)
    {
        printf("stack is empty");
        return -1;
    }
    else{
             char topElement=top();
             struct Node* temp = tos;
            tos=tos->next;
            free(temp);
            return topElement;

    }
}
void printStack()
{
    struct Node* temp=tos;
    while(temp!=NULL){
        printf("%c->",temp->data);
        temp=temp->next;
    }

}
void checkPalindrome(char str[])
{
    char temp[100];
    int i = 0, j = 0;

    // Step 1: push all chars
    while(str[i] != '\0')
    {
        push(str[i]);
        i++;
    }

    i = 0;

    // Step 2: build reversed string
    while(str[i] != '\0')
    {
        temp[j] = pop();
        i++;
        j++;
    }

    temp[j] = '\0';

    // Step 3: compare
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != temp[i])
        {
            printf("Not Palindrome");
            return;
        }
        i++;
    }

    printf("Palindrome");
}
int main()
{
    char str[100]="madam";
    checkPalindrome(str);

}

