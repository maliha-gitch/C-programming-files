#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Node
{
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
Node* insert(Node*root,int new_data)
{
    if(root==nullptr)
    {
            return new Node(new_data);
    }
    else if(root->data>new_data)
    {
        root->left=insert(root->left,new_data);
    }
    else
    {
        root->right=insert(root->right,new_data);
    }
}
void inOrder(Node* node)
{
    if(node==nullptr){
        return ;
    }
    inOrder(node->left);
    cout<<node->data<<"->";
    inOrder(node->right);

}
int minimumValue(Node* root)
{
    Node*current=root;
    while(current->left!=nullptr)
    {
        current=current->left;

    }
    return current->data;
}
int maximumValue(Node* root)
{
    Node*current=root;
    while(current->right!=nullptr)
    {
        current=current->right;

    }
    return current->data;
}
Node* Inordersuccessor(Node* current)
{
    current=current->right;
    while(current!=null && current->left!=nullptr)
    {
        current=current->left;
    }
    return current;
}
bool BSt_check(Node*root,int target_value)
{
    bool flag=false;
    Node*current=root;
   while(current!=nullptr)
   {
    if(current->data==target_value){
    flag=true;
    break;
   }
   else if(current->data>target_value){
    current=current->left;
   }
   else {
    current=current->right;
   }

   }


   return flag;

}
Node* deleteBst(Node*root,int target_value)
{
    if(root==nullptr) return root;
    else if(root->data>target_value){
        root->left=deleteBST(root->left,target_value);
    }
    else if(root->data<target_value){
        root->right=deleteBST(root->right,target_value);
    }
    else
        {
            if(root->right==nullptr && root->left==nullptr){
                delete root;
                return nullptr;
            }
            else if(root->left==nullptr && root->right!=nullptr){
                Node*temp=root->right;
                delete root;
                return temp;
            }
            else if(root->left!=nullptr && root->right==nullptr)
            {
                Node*temp=root->left;
                delete root;
                return temp;
            }
            else{
                Node*successor=Inordersuccessor(root);
                root->data=successor->data;
                root->right=deleteBST(root->right,successor->data);
            }
        }


}

int main()
{
    Node* root=new Node(100);

    root=insert(root,40);
    root=insert(root,100);
    root=insert(root,60);
    root=insert(root,500);
    inOrder(root);

}
