#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
     int data;
     Node* left;
     Node* right;
     Node(int x)
     {
         data=x;
         left=nullptr;
         right=nullptr;
     }

};
Node* insert(Node* root,int newdata)
{
    if(root==nullptr)
    {
        return new Node(newdata);
    }
    else{
        if(root->data>newdata)
        {
            root->left=insert(root->left,newdata);
        }
        else
        {
            root->right=insert(root->right,newdata);
        }
    }
    return root;

}
void in_order(Node* root)
{
    if(root==nullptr) return;
    in_order(root->left);
    cout<<root->data<<endl;
    in_order(root->right);
}
void pre_order(Node* root)
{
    if(root==nullptr) return;
    cout<<root->data<<endl;
     in_order(root->left);
     in_order(root->right);

}
void post_order(Node* root)
{
    if(root==nullptr) return;
    in_order(root->right);
    in_order(root->left);
    cout<<root->data<<endl;

}
int min_value(Node* root)
{
    if(root==nullptr) return -1;
    Node* current = root;
    while(current->left!=nullptr)
    {
        current=current->left;
    }
    return current->data;
}
int max_value(Node* root)
{
    if(root==nullptr) return -1;
    Node* current = root;
    while(current->right!=nullptr)
    {
        current=current->right;
    }
    return current->data;

}
bool search_bst(Node* root,int target)
{
   bool flag=false;
   Node* current = root;
   while(current!=nullptr)
   {
       if(current->data==target)
       {
           flag=true;
           break;
       }
       else if(current->data>target)
       {
           current=current->left;
       }
       else{
        current=current->right;
       }
   }
   return flag;
}
Node* findInorderSuccessor(Node* curent)
{
    curent=curent->right;
    while(curent!=nullptr && curent->left!=nullptr)
    {
        curent= curent->left;
    }
    return curent;
}
Node* findInorderPredecssor(Node* curent)
{
    curent=curent->left;
    while(curent!=nullptr && curent->right!=nullptr)
    {
        curent= curent->right;
    }
    return curent;
}

