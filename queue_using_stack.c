#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* s1 = NULL;
struct Node* s2 = NULL;
struct Node* create(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void push(struct Node** top, int x)
{
    struct Node* n = create(x);
    n->next = *top;
    *top = n;
}

int pop(struct Node** top)
{
    if(*top == NULL)
    {
        printf("Empty\n");
        return -1;
    }

    int val = (*top)->data;
    struct Node* temp = *top;
    *top = (*top)->next;
    free(temp);

    return val;
}

int isEmpty(struct Node* top)
{
    return top == NULL;
}

int peek(struct Node* top)
{
    return top->data;
}

/* ---------- queue using 2 stacks ---------- */

void enqueue(int x)
{
    push(&s1, x);
}

int dequeue()
{
    if(isEmpty(s1) && isEmpty(s2))
    {
        printf("Queue Empty\n");
        return -1;
    }

    if(isEmpty(s2))
    {
        while(!isEmpty(s1))
        {
            push(&s2, pop(&s1));
        }
    }

    return pop(&s2);
}

int front()
{
    if(isEmpty(s1) && isEmpty(s2))
    {
        printf("Empty\n");
        return -1;
    }

    if(isEmpty(s2))
    {
        while(!isEmpty(s1))
        {
            push(&s2, pop(&s1));
        }
    }

    return peek(s2);
}

void display()
{
    struct Node* t = s2;

    printf("Queue: ");

    while(t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }

    printf("\n");
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    printf("Dequeue: %d\n", dequeue()); // 1

    display(); // 2 3

    printf("Front: %d\n", front()); // 2
}
