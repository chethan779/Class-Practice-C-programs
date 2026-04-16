#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
}node_t;
void display(node_t*);
void free_list(node_t*);


int main(){
    node_t *s;
    s=(node_t*)malloc(sizeof(node_t));
    s->info = 100;
    s->link = (node_t*)malloc(sizeof(node_t));
    s->link->info = 200;
    s->link->link = (node_t*)malloc(sizeof(node_t));
    s->link->link->info = 300;
    s->link->link->link = NULL;
    display(s);
    free_list(s);
    return 0;
}
void display(node_t* p)
{
  while(p!=NULL)
  {
     printf("%d \t ",p->info);
	 p=p->link;
  }
}
void free_list(node_t* p)
{
  node_t* d=p;
  while(p!=NULL)
  {
  p=p->link;
  printf("\n deleting the node with info %d \n ",d->info);
  free(d);
  d=p;
  }
}
  
