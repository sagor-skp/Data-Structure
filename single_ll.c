#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void count_node(struct node *head)
{
    int count = 0;
    if (head == NULL)
    {
        printf("Linked list is empty");
        return;
    }

    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("\n");
    printf("%d", count);
}

void print_data(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty");
        return;
    }

    struct node *pt = head;
    while (pt != NULL)
    {
        printf("%d", pt->data);
        pt = pt->link;
    }
}

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    print_data(head);
    count_node(head);

    return 0;
}
