#include<stdio.h>

int main(){
    char arr1[]="Chethan";
    char arr2[]="Chethanan";
    char *ptr1,*ptr2;

    ptr1=arr1;
    ptr2=arr2;



    // for (int i = 0; i < ; i++)
    // {
        
    // }
    

    if(*ptr1==*ptr2)
    {
        printf("Good boy its same ");
        ptr1++;
        ptr2++;
    }
    else
    {
        printf("Bad boy not the samee ");
        ptr1++;
        ptr2++;
    }

    return 0;
}