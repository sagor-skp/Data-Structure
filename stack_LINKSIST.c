// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // struct node{
// //     int data;
// //     struct node *next;
// // }
// // struct node *top=NULL;

// // void push() {
// //     int x;
// //     cout << "Enter data: ";
// //     cin >> x;
// //     struct node *newnode;
// //     newnode=(struct node*)
// // }

// // void pop() {
   
// // }

// // void topelement(){
   
// // }

// // void display(){
    
// // }

// // int main() {
// //     int ch;
// //     do {
// //         cout << "1. Push in stack" << endl;
// //         cout << "2. Pop from stack" << endl;
// //         cout << "3. find top" << endl;
// //         cout<<"4.display element"<<endl;
// //         cout << "-1. Exit" << endl;
        
// //         cin >> ch;
// //         switch (ch) {
// //             case 1:
// //                 push();
// //                 display();
// //                 break;
// //             case 2:
// //                 pop();
// //                 display();
// //                 break;
// //             case 3:
// //                 topelement();
// //                 break;
// //             case 4:
// //                 display();
// //                 break;

// //             case -1:
// //                 cout << "Exiting program" << endl;
// //                 break;
// //             default:
// //                 cout << "Invalid option. Please choose 1, 2, or -1." << endl;
// //         }
// //     } while (ch != -1);

// //     return 0;
// // }

// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// struct node* top=NULL;

// void linkedListTraversal(struct node *ptr){
//     while(ptr!=NULL){
//         printf("%d ",ptr->data);
//         ptr=ptr->next;
//     }
// }
// int isempty(struct node* top){
//     if(top==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// int isfull(struct node* top){
//     struct node* p=(struct node*)malloc(sizeof(struct node));
//     if(p==NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// struct node* push(struct node* top,int x){
//    if(isfull(top)){
//       printf("stack overflow\n");
//    }
//    else{
//       struct node* n =(struct node*)malloc(sizeof(struct node));
//       n->data=x;
//       n->next=top;
//       top=n;
//       return top;
//    } 
// }
// int pop(struct node* tp){
//     if(isempty(tp)){
//         printf("stuckunderflow\n");
//     }
//     else{
//         struct node* n=tp;
//         top=(tp)->next;
//         int x=n->data;
//         free(n);
//         return x;
//     }
// }
// int main(){
//     top = push(top, 78);
//     top = push(top, 7);
//     top = push(top, 8);
    
//      linkedListTraversal(top);
 
//     int element = pop(top); 
//     printf("Popped element is %d\n", element);
//     linkedListTraversal(top);
//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* top=NULL;

push(int x){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void display(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("Stack is empty\n");
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void peak(){
     if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        printf("Top element is %d\n",top->data);
    }
}

void pop(){
    struct node *n;
     n=top;
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else{
        printf("pop element is %d \n",top->data);
        top=top->next;
        free(n);
    }
   

}

int main(){
    push(2);
    push(3);
    display();
    push(1);
    display();
    pop();
    display();
}