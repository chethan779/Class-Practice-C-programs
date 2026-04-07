#include<stdio.h>
#include<stdlib.h>

int main(){
    int* x;
    int n,i;

    printf("\n\nEnter number of elements:\n");
    scanf("%d", &n);
    printf("\nn = %d\n", n);

    x=(int*)malloc(n*sizeof(int));  //memory will be allocated for 5 integers

    if(x==NULL)
        printf("Memory not allocated.\n");
    else
        {printf("Memory successfull allocated using malloc.\n");
            printf("\ninitial address is %p\n",x);
            printf("Enter the integer values:\n");
            for (int i = 0; i < n; i++)
                scanf(" %d", (x+i));
            

            printf("Output: ");
            for (int i = 0; i < n; i++)
            {
                    printf("%d ",*(x+i));
            }
            
            
        }

    int* y;
    y=(int*)realloc(x,3*sizeof(int));  
      /*to extend or decrease the size of the previously 
      allocated memory block but it changes existing pointer
                                      */


    if (y==NULL)
        printf("Memory not allocated.\n");
    else
        {
            printf("\nnew address is %p\n",y);
            // for (int i = 0; i < n; i++)
            //     scanf(" %d", &y[i]);
            
            printf("Output: ");
            for (int i = 0; i < 3; i++)
            {
                printf("%d ",*(y+i));
            }

        }
    
    free(x);
    x=NULL;
    free(y);
    y=NULL;
    
    return 0;
}