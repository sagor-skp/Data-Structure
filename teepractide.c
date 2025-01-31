// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     struct node *left;
//     struct node *right;
// };
// struct node *createnode(int data)
// {
//     struct node *n;
//     n = new node;//change
//     n->data = data;
//     n->left = NULL;
//     n->right = NULL;
//     return n;
// }
// void preorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         cout << root->data << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }
// void postorder(struct node *root)
// {
//     if (root != NULL)
//     {
//         postorder(root->left);
//         postorder(root->right);
//         cout << root->data << " ";
//     }
// }
// void inorder(struct node* root)
// {
//     if(root!=NULL)
//     {
//         inorder(root->left);
//         cout<<root->data<<" ";     
//         inorder(root->right);
//  /*
//            5
//           / \
//          3   6
//         / \
//        1   4
//  */
//     }
// }
// //Recursive Search
// struct node *search(node*root,int key)
// {
//     if(root==NULL)
//     {
//         return NULL;
//     }
//     if(key==root->data)
//     {
//         return root;
//     }
//     else if(key<root->data)
//     {
//         search(root->left,key);
//     }
//     else
//     {
//        search(root->right,key);
//     }
// }
// //Iterative Search
// struct node*ItrSearch(struct node*root,int key)
// {
//     int ct=0;
//     while(root!=NULL)
//     {
//         if(key==root->data)
//         {
//             return root;   
//         }
//         else if(key<root->data)
//         {
//             root=root->left;
//         }
//         else
//         {
//             root=root->right;
//         }
//     }
//     return NULL;
// }
// struct node*insert(struct node *root,int key)
// {
//     struct node *prev=NULL;
    
//     while(root!=NULL)
//     {
//         prev=root;
//         if(key==prev->data)
//         {
//             cout<<"Cannot insert in BST already in have";
//             return prev;
//         }
//         else if(key<prev->data)
//         {
//             root=root->left;
//         }
//         else{
//             root=root->right;
//         }
//     }
//     struct node* ptr=createnode(key);
//     if(key<prev->data)
//     {
//         prev->left=ptr;
//     }
//     else
//     {
//         prev->right=ptr;
//     }
// }
// int main()
// {
//     struct node *p = createnode(5);
//     struct node *p1 = createnode(3);
//     struct node *p2 = createnode(6);
//     struct node *p3 = createnode(1);
//     struct node *p4 = createnode(4);

//     p->left = p1;
//     p->right = p2;
//     p1->left = p3;
//     p1->right = p4;

//     // preorder(p);
//     // cout<<endl;
//     // postorder(p);
//     // cout<<endl;
//     // inorder(p);
//     // struct node* n=search(p,3);
//     // if(n!=NULL)
//     // {
//     //     cout<<"Found : "<<n->data<<endl;
//     // }
//     // else{
//     //     cout<<"Element Not Found "<<endl;
//     // }
//     // cout<<n->data<<endl;


//     // struct node* n=ItrSearch(p,3);
//     // if(n!=NULL)
//     // {
//     //     cout<<"Found : "<<n->data<<endl;
//     // }
//     // else{
//     //     cout<<"Element Not Found "<<endl;
//     // }
//     // cout<<n->data<<endl;
//     insert(p,4);
//     cout<<p->right->right->data<<endl;

//     return 0;
// }
//c++ code
/*
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}

void preOrder(struct  node* root){
    if(root!=NULL){
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct  node* root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct  node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(struct  node* root){
    static struct node *prev = NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

struct node * searchIter(struct node* root, int key){
    while(root!=NULL){
        if(key == root->data){
            return root;
        }
        else if(key<root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }

}

struct node* inorderpredesessor(struct node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

struct node* deletenode(struct node* root,int value){
    struct node *ipre;
   
    if(root==NULL){
        return NULL;
    }
     //base for recursion
     if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
     }
    //searching for the node to be deleted
    if(value<root->data){
        root->left=deletenode(root->left,value);
    }
    else if(value>root->data){
        root->right=deletenode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        ipre=inorderpredesessor(root);
        root->data=ipre->data;
        root->left=deletenode(root->left,ipre->data);
    }
   // return root;
}

int main(){
     
    // Constructing the root node - Using Function (Recommended)
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // printf("Enter element :");
    // int y;
    // scanf("%d",&y);

    // insert(p, y);
    // //printf("%d", p->right->right->data);//9
    // printf("%d",p->left->left->right->data);//2

     inOrder(p);
     printf("\n");
     deletenode(p,5);
     inOrder(p);
    return 0;
}
*/
#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node *n; // creating a node pointer
    n = (struct node *) malloc(sizeof(struct node)); // Allocating memory in the heap
    n->data = data; // Setting the data
    n->left = NULL; // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n; // Finally returning the created node
}
void inOrder(struct node* root){
    while(root!=NULL){
        
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
void insert(struct node *root, int key){
   struct node *prev = NULL;
   while(root!=NULL){
       prev = root;
       if(key==root->data){
           printf("Cannot insert %d, already in BST", key);
           return;
       }
       else if(key<root->data){
           root = root->left;
       }
       else{
           root = root->right;
       }
   }
   struct node* new = createNode(key);
   if(key<prev->data){
       prev->left = new;
   }
   else{
       prev->right = new;
   }

}
struct node* inorderpredesessor(struct node* root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

struct node* deletenode(struct node* root,int value){
    struct node *ipre;
   
    if(root==NULL){
        return NULL;
    }
     //base for recursion
     if(root->left==NULL && root->right==NULL){
        free(root);
        return NULL;
     }
    //searching for the node to be deleted
    if(value<root->data){
        root->left=deletenode(root->left,value);
    }
    else if(value>root->data){
        root->right=deletenode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        ipre=inorderpredesessor(root);
        root->data=ipre->data;
        root->left=deletenode(root->left,ipre->data);
    }
   // return root;
}

int main(){
    struct node* p=createNode(5);
     struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
     inOrder(p);
     printf("\n");
      printf("Enter element :");
    int y;
    scanf("%d",&y);

     insert(p, y);
    printf("%d", p->right->right->data);//9
    printf("%d",p->left->left->right->data);//2

    inOrder(p);
     printf("\n");
     deletenode(p,5);
     inOrder(p);
    return 0;

}
