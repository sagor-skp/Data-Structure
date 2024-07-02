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

struct node* searchIter(struct node* root,int key){
    while(root!=NULL){
        if(key==root->data){
            return root;
        }
        else if(key<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
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

    struct node *n=searchIter(p,k);
    printf("\n");
    if(n!=NULL){
        printf("Found: %d",n->data);
    }
    else{
        printf("Element not found");
    }



}