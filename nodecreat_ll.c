#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=NULL;
   head =(struct node *)malloc(sizeof(struct node));
   head->data=45;
   head->link=NULL;
  

   struct node *current=malloc(sizeof(struct node));
   current->data=98;
   current->link=NULL;
   head->link=current;
   

   struct node *current2=malloc(sizeof(struct node));
   current2->data=66;
   current2->link=NULL;
   current->link=current2;

    printf("%d",head->data);
   printf("%d",current->data);
   printf("%d",current2->data);

   
    
}