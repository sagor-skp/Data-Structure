#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void print_data(struct node *head){
    int count=0;
    if(head==NULL){
        printf("list is impty");
    }
    else{
        struct node *ptr=head;
        while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->link;
            count++;
        }
        

    }
    printf("%d\n",count);
}

void count_node(struct node *head){
    struct node *p=head;
    int count=0;
    if(head==NULL){
        printf("list is impty");
    }
    else{
        while(p!=NULL){
            count++;
            p=p->link;
        }
    }
     printf("%d\n",count);
}

int main(){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current=malloc(sizeof(struct node));
    current->data=98;
    current->link=NULL;
    head->link=current;

    // struct node *current1=malloc(sizeof(struct node));
    // current1->data=1;
    // current1->link=NULL;
    // current->link=current1;

    current=malloc(sizeof(struct node));
    current->data=3;
    current->link=NULL;
    head->link->link=current;


    print_data(head);
    count_node(head);

    return 0;
}