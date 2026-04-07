#include<stdio.h>
#include<stdlib.h>

int main(){
    int* x;
    int n,i;

    printf("\n\nEnter number of elements:\n");
    scanf("%d", &n);
    printf("\nn = %d\n", n);

    x= (int*)malloc(n*sizeof(int));  //memory will be allocated for 5 integers

    if(x==NULL)
        printf("Memory not allocated.\n");
    else
        {printf("Memory successfull allocated using malloc.\n");

            printf("Enter the integer values:\n");
            for (int i = 0; i < n; i++)
                scanf(" %d", &x[i]);
            free(x);

            printf("Output: ");
            for (int i = 0; i < n; i++)
            {
                    printf("%d ",x[i]);
            }
            
        }

    
    return 0;
}