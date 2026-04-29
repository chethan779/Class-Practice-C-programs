#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

/*display()
{
temp = head;

while(temp != NULL)
{
    printf("%d" , temp-> data);
    temp = temp -> next;d
}
}*/

/*For adding element in 1st

        if(head = NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            new_node -> next = head;
            head = new_node;
        }
*/

/*For adding in last position
    traverse through and then

    while(temp = NULL)
    {
        temp -> next = new_node;
        temp = new_node;
    }
*/

/*For deleting element 1st node

temp = head;
head = head->next;
temp -> next = NULL;
free(temp);

*/

int main()
{
    struct node *head = NULL , *temp , *new_node;

    int n , i=0;
    scanf("%d", &n);

    while (i<n)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &new_node->data);

        new_node -> next =NULL;

        if(head = NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp -> next = new_node;
            temp = temp -> next ;
        }
        i++;
    }
}

