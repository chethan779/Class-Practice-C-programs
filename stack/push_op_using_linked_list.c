#include<stdio.h>

struct node
{
    int data;
    struct node *next;

};

int main()
{
    struct node *top = NULL;
    struct node *head = (struct node *)malloc(sizeof(struct node *));

    head->data=25;
    head->next = top;

    top=head;

    struct node *head = (struct node *)malloc(sizeof(struct node *));

    head->data=35;
    head->next = top;
}