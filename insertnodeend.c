// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *link;
// };
// void print_data(struct node *head){
//     int count=0;
//     if(head==NULL){
//         printf("list is impty");
//     }
//     else{
//         struct node *ptr=head;
//         while(ptr!=NULL){
//             printf("%d\n",ptr->data);
//             ptr=ptr->link;
//             count++;
//         }
        

//     }
//     printf("%d\n",count);
// }

// void count_node(struct node *head){
//     struct node *p=head;
//     int count=0;
//     if(head==NULL){
//         printf("list is impty");
//     }
//     else{
//         while(p!=NULL){
//             count++;
//             p=p->link;
//         }
//     }
//      printf("%d\n",count);
// }


// void add_at_end(struct node *head,int data){
//     struct node *ptr1,*temp;
//     ptr1=head;
//     temp=(struct node*)malloc(sizeof(struct node ));
//     temp->data=data;
//     temp->link=NULL;

//     while(ptr1->link!=NULL){
//         ptr1=ptr1->link;
//     }
//     ptr1->link=temp;

// }

// // void add_at_begening(struct node **head,int d){
// //     struct node *newnode;
// //     newnode=(struct node*)malloc(sizeof(struct node));
// //     newnode->data=d;
// //     newnode->link=NULL;
// //     newnode->link=*head;
// //     *head=newnode;
// // }
// void add_at_beginning(struct node **head, int d){
//     struct node *newnode;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     newnode->data = d;
//     newnode->link = *head;
//     *head = newnode;
// }

// int main(){
//     struct node *head=NULL;
//     head=(struct node *)malloc(sizeof(struct node));
//     head->data=45;
//     head->link=NULL;

//     struct node *current=malloc(sizeof(struct node));
//     current->data=98;
//     current->link=NULL;
//     head->link=current;

   

//     current=malloc(sizeof(struct node));
//     current->data=3;
//     current->link=NULL;
//     head->link->link=current;


//     print_data(head);
//     count_node(head);

//     add_at_end(head,67);

//     print_data(head);
//     count_node(head);

//     add_at_begening(&head,33);
//     print_data(head);
//     count_node(head);

//     return 0;
// }


#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void print_data(struct node *head) {
    int count = 0;
    if (head == NULL) {
        printf("list is empty");
    } else {
        struct node *ptr = head;
        while (ptr != NULL) {
            printf("%d\n", ptr->data);
            ptr = ptr->link;
            count++;
        }
    }
    printf("Node count: %d\n", count);
}

void count_node(struct node *head) {
    int count = 0;
    struct node *p = head;
    while (p != NULL) {
        count++;
        p = p->link;
    }
    printf("Node count: %d\n", count);
}

void add_at_end(struct node *head, int data) {
    struct node *ptr1 = head;
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr1->link != NULL) {
        ptr1 = ptr1->link;
    }
    ptr1->link = temp;
}

void add_at_beginning(struct node **head, int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = *head;
    *head = newnode;
}

void add_at_position(struct node* head,int data,int pos){
    struct node *temp=head;
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->link=NULL;

    int i=1;
    while(i<pos){
        temp=temp->link;
        i++;
    }
    newnode->link=temp->link;
    temp->link=newnode;

}

void delate_from_end(struct node* head){
    struct node *temp,*previous;
    if(head==NULL){
        printf("This list is empty");
    }
    // else if(head->link==0){
    //     free(head);
    //     head=NULL;
    // }
    temp=head;

    while(temp->link!=0){
        previous=temp;
        temp=temp->link;
    }
    if(temp==head){
        head=0;
    }
    else{
        previous->link=0;

    }
    
    free(temp);
}

void delate_from_begening(struct node **head){
    if(*head==NULL){
        printf("List is already empty");
    }
    else{
        
        struct node *temp=*head;
        *head=(*head)->link;
        free(temp);

    }
    
    
}

 void delate_from_pos(struct node* head,int position){
    int i=1;
    struct node *temp,*nextnode;
    temp=head;

    while(i<position-1){
        temp=temp->link;
        i++;
    }
    nextnode=temp->link;
    temp->link=nextnode->link;
    free(nextnode);


 }


int main() {
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    print_data(head);
    count_node(head);

    add_at_end(head, 67);
    print_data(head);
    count_node(head);

    add_at_beginning(&head, 33);
    print_data(head);
    count_node(head);


    int data=88,position=3;
    add_at_position(head,data,position);
    print_data(head);
    count_node(head);

    delate_from_end(head);
    print_data(head);
    count_node(head);

    delate_from_begening(&head);
    print_data(head);
    count_node(head);

    int dposition=2;
    delate_from_pos(head,dposition);
    print_data(head);
    count_node(head);

    return 0;
}
