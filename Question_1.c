#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* create_new_node(int new_data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = new_data;
    temp->next = NULL;
    return temp;
}
void print_linked_list(struct Node* head)
{
    if(head == NULL)
    {
        printf("Empty Linked List");
    }
    else
    {
        struct Node* temp = head;

        while(temp != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
struct Node* insert_at_first(int new_data, struct Node* head)
{
    if(head == NULL)
    {
        head = create_new_node(new_data);
    }
    else
    {
        struct Node* new_node = create_new_node(new_data);
        new_node->next = head;
        head = new_node;
    }
    return head;
}

struct Node* deleteEven(struct Node* head) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp != NULL) {
        if (temp->data % 2 == 0) {
            struct Node *deleteNode = temp;

            if (prev == NULL) {
                head = temp->next;
                temp = head;
            } else {
                prev->next = temp->next;
                temp = temp->next;
            }

            free(deleteNode);
        } else {
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}
struct Node* insert_at_last(int new_data, struct Node* head)
{
    if(head == NULL)
    {
        head = create_new_node(new_data);
    }
    else
    {
        struct Node* temp = head;
        while( temp->next != NULL )
        {
            temp = temp->next;
        }
        temp->next = create_new_node(new_data);
    }

    return head;
}
int main() {
    struct Node* head = NULL;
    head = insert_at_first(10, head);
     head = insert_at_last(20, head);
     head = insert_at_last(30, head);
     head = insert_at_last(29, head);

    printf("Input: ");
     print_linked_list(head);
    head = deleteEven(head);

    printf("Output: ");
     print_linked_list(head);

    return 0;
}
