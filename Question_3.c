#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node* create_new_node(int new_data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = new_data;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void print_linked_list(struct Node* head) {
    if (head == NULL) {
        printf("Empty Linked List\n");
        return;
    }

    struct Node* temp = head;

    while (temp != NULL) {
        printf("%d", temp->data);

        if (temp->next != NULL) {
            printf("<->");
        }

        temp = temp->next;
    }

    printf("\n");
}

struct Node* insert_at_last(int new_data, struct Node* head) {
    struct Node* new_node = create_new_node(new_data);

    if (head == NULL) {
        return new_node;
    }

    struct Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;

    return head;
}

struct Node* reverseDoubly(struct Node* head) {
    struct Node* current = head;
    struct Node* temp = NULL;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        current = current->prev;
    }

    if (temp != NULL) {
        head = temp->prev;
    }

    return head;
}

int main() {
    struct Node* head = NULL;

    head = insert_at_last(7, head);
    head = insert_at_last(12, head);
    head = insert_at_last(8, head);
    head = insert_at_last(65, head);
    head = insert_at_last(10, head);

    printf("Input: ");
    print_linked_list(head);

    head = reverseDoubly(head);

    printf("Output: ");
    print_linked_list(head);

    return 0;
}
