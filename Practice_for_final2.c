#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* tos=NULL;
struct Node* create_atNewNode(int Ndata)
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=Ndata;
    newnode->next=NULL;
    return newnode;
};
int top()
{
    if(tos==NULL){ return -1; }
    else{
        return tos->data;
    }

}
int pop()
{
    if(tos==NULL) {return -1;}
    else{
            int topelement=top();
            struct Node* temp=tos;
            tos=tos->next;
            free(temp);
        return topelement;
    }



}
void push(int newData)
{
    struct Node* newNode=create_atNewNode(newData);
    if(tos==NULL)
    {
        tos=newNode;

    }
    else
    {
        newNode->next=tos;
        tos=newNode;
    }
}
void printStack()
{
    if(tos==NULL)
    {
        printf("stack is empty");
    }
    else
    {
        struct Node* temp=tos;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    push(15);
    printStack();
}
