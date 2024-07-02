#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* front=NULL;
struct node* rear=NULL;

void enqueue(int x){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;

    if(front==NULL && rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display(){
    struct node* temp;
    if(front==NULL && rear==NULL){
       printf("Queue is empty");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

void dequeue(){
   struct node* temp;
   temp=front; 
   if(front==NULL && rear==NULL){
       printf("Queue is empty");
    }
    else{
        front=front->next;
        printf("DEqued element is %d\n",temp->data);
        free(temp);
    }
}

int main()
{
    dequeue();
    // enqueue(2);
    // enqueue(3);
    // enqueue(4);
    // display();
    // dequeue();
    // display();

}

