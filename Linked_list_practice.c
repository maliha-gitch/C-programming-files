#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node* create_new_node(int new_data){
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=new_data;
temp->next=NULL;
return temp;
};
struct Node* insert_at_first(int new_data,struct Node* head){
if(head==NULL){
    head=create_new_node(new_data);
}
else{
    struct Node* new_node=create_new_node(new_data);
    new_node->next=head;
    head=new_node;

}
return head;


};
void print_linked_list(struct Node* head){
struct Node* temp=head;
while(temp!=NULL){
    printf("%d->",temp->data);
    temp=temp->next;
}
printf("\n");
}
struct Node* insert_at_last(int new_data,struct Node* head)
{
    if(head==NULL){
        head=create_new_node(new_data);
    }
    else{

        struct Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        struct Node* new_node=create_new_node(new_data);
        temp->next=new_node;
    }
    return head;
};

struct Node* insert_at_position(int position,int new_data,struct Node* head){
if(head==NULL && position!=0){
    printf("linked list empty");
}
else if(head==NULL && position == 0){
    struct Node* new_node=create_new_node(new_data);
    new_node=head;
}
else{
        struct Node* temp=head;
    int i=0;
    while(i<position-1){
        temp=temp->next;
        i++;
    }
    struct Node* new_node=create_new_node(new_data);
    new_node->next=temp->next;
    temp->next=new_node;
}
return head;
}

struct Node* insert_after_particular_element(int target,int new_data,struct Node* head)
{
    struct Node* temp=head;
    while(temp->data!=target && temp!=NULL){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("target % value not found in linked list",target);
    }
    else
    {
        struct Node* new_node=create_new_node(new_data);
        new_node->next=temp->next;
        temp->next=new_node;
    }
    return head;

};
struct Node* delete_particular_element(int target,struct Node* head)
{
    struct Node* temp=head;
    while(temp!=NULL && temp->next->data!=target){
        temp=temp->next;
    }
    if(temp->next ==NULL && temp->data!=target){
        printf("not found");
    }
    else if(temp->next==NULL && temp->data==target){
        free(temp);
    }
    else{
        struct Node* deleteNode=temp->next;
        temp->next=temp->next->next;
        free(deleteNode);

    }
    return head;

};
int main(){
struct Node* head=NULL;
head=insert_at_first(20,head);


head=insert_at_last(50,head);
head=insert_at_last(60,head);
print_linked_list(head);
head=insert_at_position(2,30,head);
print_linked_list(head);
head=insert_after_particular_element(20,40,head);
print_linked_list(head);






}
