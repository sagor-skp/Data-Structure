#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* creatnode(int data){
     struct node *n;//creating the node pointer
    n=(struct node *)malloc(sizeof(struct node));//allocating memory
    n->data=data;//setting the data
    n->left=NULL;//setting left and rihgt to null
    n->right=NULL;//setting left and rihgt to null
    return n;//finally returning the created node
}
void preorder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d ",root->data);
    preorder(root->left);
    
    preorder(root->right);
} 

void postorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    
    postorder(root->right);
    printf("%d ",root->data);
} 

void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
     printf("%d ",root->data);
    inorder(root->right);
   
} 
int main(){
    /*
    
    //constructing the root node
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=2;
    p->left=NULL;
    p->right=NULL:

   //constructing the second node
    struct node *p1;
    p1=(struct node *)malloc(sizeof(struct node));
     p1->data=1;
    p1->left=NULL;
    p1->right=NULL:
    
    //constructing the third node
    struct node *p2;
    p2=(struct node *)malloc(sizeof(struct node));
    p2->data=4;
    p2->left=NULL;
    p2->right=NULL:
    
    //linking the root node with left and right child
    p->left=p1;
    p->right=p2:
    */

    struct node *p=creatnode(4);
    struct node *p1=creatnode(1);
    struct node *p2=creatnode(6);
    struct node *p3=creatnode(5);
    struct node *p4=creatnode(2);

    /*
         4
        /  \
       1    6
      / \   
     5   2 
    
    */

    //linking the root node with left and right child
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("preorder:");
    preorder(p);
    printf("\n");

    printf("postorder:");
    postorder(p);
    printf("\n");

    printf("inorder:");
    inorder(p);
    printf("\n");





}