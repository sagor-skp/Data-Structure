#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* createnode(int data){
    struct node *n;
   n = (struct node *) malloc(sizeof(struct node));
   n->data=data;
   n->left=NULL;
   n->right=NULL;
   return n;
} 

void preorder(struct node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

struct node* search(struct node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left,key);
    }
    else{
        return search(root->right,key);
    }
}

void insert(struct node *root,int key){
    struct node *prev=NULL;
    while(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("can not insert %d,already here ",key);
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node* new=createnode(key);

    if(key<prev->data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }
}

int main()
{
    struct node *p=createnode(5);
    struct node *p1=createnode(3);
    struct node *p2=createnode(6);
    struct node *p3=createnode(1);
    struct node *p4=createnode(4);

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

    // preorder(p);
    // printf("\n");

    // inorder(p);
    // printf("\n");

    // postorder(p);
    // printf("\n");

    // int x;
    // printf("Enter your search value :");
    // scanf("%d",&x);
    // struct node* n=search(p,x);//receive root
    // if(n!=NULL){
    //     printf("Found:%d ",n->data);
    // }
    // else{
    //     printf("Element Not found");
    // }
    int y;
    printf("Enter value :");
    scanf("%d",&y);
    insert(p,y);
    printf("\n%d ",p->left->left->right->data);//for 2

    return 0;
}
