#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* creatnode(int data){
    struct node* n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}


void insert(struct node *root,int key){
    struct node *prev=NULL;
    
    while(root!=NULL){
        prev=root;//null er ager root thakbe
        if(key==root->data){
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }

    }
    struct node* new=creatnode(key);//creating new node
    if(key<prev->data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }
}
int main(){
    struct node *p=creatnode(5);
    struct node *p1=creatnode(3);
    struct node *p2=creatnode(6);
    struct node *p3=creatnode(1);
    struct node *p4=creatnode(4);
    //struct node *p1=creatnode(3);
     /*
         5
        /  \
       3    6
      / \   
     1   4 
    
    */
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    int k;
    printf("enter key:");
    scanf("%d",&k);

    insert(p,k);
    printf("%d",p->right->right->data);
    return 0;


}
/*

#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* creatnode(int data){
    struct node* n;
    n=(struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}


void insert(struct node *root,int key){
    struct node *prev=NULL;
    
    while(root!=NULL){
        prev=root;//null er ager root thakbe
        if(key==root->data){
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }

    }
    struct node* new=creatnode(key);//creating new node
    if(key<prev->data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }
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
    struct node *p=creatnode(5);
    struct node *p1=creatnode(3);
    struct node *p2=creatnode(6);
    struct node *p3=creatnode(1);
    struct node *p4=creatnode(4);
    //struct node *p1=creatnode(3);
     
    //      5
    //     /  \
    //    3    6
    //   / \   
    //  1   4 
    
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
     inorder(p);
     printf("\n");
    int k;
    printf("enter key:");
    scanf("%d",&k);

    insert(p,k);
    printf("%d",p->right->right->data);
    printf("\n");
    inorder(p);
    return 0;


}
*/
