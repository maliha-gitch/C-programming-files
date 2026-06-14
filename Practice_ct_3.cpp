///////Binary tree basic
////
////#include<iostream>
////#include<stack>
////#include<queue>
////
////using namespace std;
////struct Node
////{
////public:
////    int data;
////    Node *left;
////    Node *right;
////};
////
////struct Node* create_new_node(int data)
////{
////    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
////    newNode->data=data;
////    newNode->left=NULL;
////    newNode->right=NULL;
////    return newNode;
////};
////void pre_order(struct Node* node,vector<int>& pre_order_list)
////{
////    if(node==NULL) return;
////pre_order_list.push_back(node->data);
////pre_order(node->left,pre_order_list);
////pre_order(node->right,pre_order_list);
////
////
////}
////
////void in_order(struct Node* node,vector<int>& in_order_list)
////{
////    if(node==NULL) return;
////in_order(node->left,in_order_list);
////in_order_list.push_back(node->data);
////in_order(node->right,in_order_list);
////
////
////}
////
////
////void post_order(struct Node* node,vector<int>& post_order_list)
////{
////    if(node==NULL) return;
////post_order(node->left,post_order_list);
////post_order(node->right,post_order_list);
////post_order_list.push_back(node->data);
////
////
////}
////
////
////int main()
////{
////     Node* root = create_new_node(1);
////
////    root->left = create_new_node(2);
////    root->right = create_new_node(3);
////
////    root->left->left = create_new_node(4);
////    root->left->right = create_new_node(5);
////
////    root->right->left = create_new_node(6);
////    root->right->right = create_new_node(7);
////
////    root->left->left->right = create_new_node(8);
////
////    root->right->left->left = create_new_node(9);
////    root->right->left->right = create_new_node(10);
////
////    vector<int> pre_order_list;
////    pre_order(root,pre_order_list);
////    for(int i=0;i<pre_order_list.size();i++)
////    {
////        cout<<pre_order_list[i]<<"->";
////    }
////    cout<<endl;
////
////
////     vector<int> in_order_list;
////     in_order(root,in_order_list);
////    for(int i=0;i<in_order_list.size();i++)
////    {
////        cout<<in_order_list[i]<<"->";
////    }
//// cout<<endl;
////
////     vector<int> post_order_list;
////     post_order(root,post_order_list);
////    for(int i=0;i<post_order_list.size();i++)
////    {
////        cout<<post_order_list[i]<<"->";
////    }
////     cout<<endl;
////}






























