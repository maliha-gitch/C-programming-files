#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node *q1 = NULL;
struct Node *q2 = NULL;

/* Queue Functions */

struct Node* create(int x)
{
    struct Node* n=(struct Node*)malloc(sizeof(struct Node));
    n->data=x;
    n->next=NULL;
    return n;
}

void enqueue(struct Node** front,int x)
{
    struct Node* n=create(x);

    if(*front==NULL)
    {
        *front=n;
        return;
    }

    struct Node* temp=*front;

    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=n;
}

int dequeue(struct Node** front)
{
    if(*front==NULL)
        return -1;

    struct Node* temp=*front;
    int val=temp->data;

    *front=(*front)->next;

    free(temp);

    return val;
}

int isEmpty(struct Node* front)
{
    return front==NULL;
}

/* Stack Using Two Queues */

void push(int x)
{
    enqueue(&q2,x);

    while(!isEmpty(q1))
    {
        enqueue(&q2,dequeue(&q1));
    }

    struct Node* temp=q1;
    q1=q2;
    q2=temp;
}

int pop()
{
    if(isEmpty(q1))
    {
        printf("Stack Empty\n");
        return -1;
    }

    return dequeue(&q1);
}

int top()
{
    if(isEmpty(q1))
        return -1;

    return q1->data;
}

void display()
{
    struct Node* temp=q1;

    printf("Stack: ");

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

int main()
{
    push(1);
    push(2);
    push(3);

    display();

    printf("Pop = %d\n",pop());

    display();

    printf("Top = %d\n",top());
}
