#include<stdio.h>
#include<stdlib.h>
int main(){
    int* x;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    x=(int *)malloc(n*sizeof(int));

    printf("Enter %d elements for malloc:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Elements stored using malloc:\n");
   for (int i = 0; i < n; i++)
   {
    printf("%d ",x[i]);
   }
   printf("\n");
   int* y;
   y=(int *)calloc(n,sizeof(int));
    printf("Elements stored using calloc (initially zero):\n");
   for (int i = 0; i < n; i++)
   {
    printf("%d ",y[i]);
   }
   printf("\n");
   int* z;
   int n1;
   printf("Enter new size for realloc: ");
   scanf("%d", &n1);
   z=(int*)realloc(x,n1*sizeof(int)); 


   printf("Enter %d elements for realloc:\n",n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &z[i]);
    }
    printf("Elements after realloc:\n");
   for (int i = 0; i < n1; i++)
   {
    printf("%d ",z[i]);
   }

   free(x);
   free(y);
   free(z);
   x=NULL;
   y=NULL;
   z=NULL;
    return 0;
}