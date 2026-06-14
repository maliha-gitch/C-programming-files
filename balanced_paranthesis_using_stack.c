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
void push(char new_data)
{
    struct Node* newNode=create_at_new_node(new_data);
    if(tos==NULL)
    {
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

    if(tos==NULL)
    {
        printf("stack is empty");
        return -1;
    }
    else
    {
        int topelement=top();
        struct Node* temp=tos;
        tos=tos->next;
        free(temp);
        return topelement;
    }

}
void printStack()
{
    struct Node* temp=tos;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
}
int isEmpty()
{
    return tos==NULL;
}

void checkParenthesis(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            push(str[i]);
        }

        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(isEmpty())
            {
                printf("Not Balanced");
                return;
            }

            char ch = pop();

            if((str[i]==')' && ch!='(') ||
               (str[i]=='}' && ch!='{') ||
               (str[i]==']' && ch!='['))
            {
                printf("Not Balanced");
                return;
            }
        }

        i++;
    }

    if(isEmpty())
        printf("Balanced");
    else
        printf("Not Balanced");
}

int main()
{
  char str[100]={"()[]{}"};
  checkParenthesis(str);


}
