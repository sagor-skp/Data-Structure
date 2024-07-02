#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createnode(int data){
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;

}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

struct node* inOrderPredecessor(struct node* root){//inorcder kore desire root er purber root
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}


struct node* deletenode(struct node* root,int value){
    struct node* ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
    }
    if(value<root->data){
       root->left= deletenode(root->left,value);
    }
    else if(value>root->data){
        root->right= deletenode(root->right,value);
    }
    else{
        ipre=inOrderPredecessor(root);
        root->data=ipre->data;
        root->left= deletenode(root->left,ipre->data);
    }
    return root;
}
int main()
{
    struct node* p = createnode(5);
    struct node* p1=createnode(3);
     struct node* p2 = createnode(6);
    struct node* p3=createnode(1);
     struct node* p4=createnode(4);
     // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  
 
    // Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inorder(p);
    printf("\n");
    deletenode(p,5);
     inorder(p);
}
