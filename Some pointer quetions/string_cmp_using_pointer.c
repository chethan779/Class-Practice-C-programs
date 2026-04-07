#include<stdio.h>

int main(){
    char str1[]="Chethan",str2[]="Chethan";
    char *ptr1,*ptr2;
    int count;
    ptr1=str1;
    ptr2=str2;
    printf(" %s",ptr1);
    printf(" %s",ptr2);
    int i=0;
    while (ptr1!="\0")
    {
    
    
        if(ptr1==ptr2)
        {   printf("rhuk");
            ptr1++;
            ptr2++;
        }
        else
            {
                count=-1;
                break;
            }
    }
    
    if(count=-1)
    {
        printf("Not equal");
    }
    else
        printf("Equall!!");
    return 0;
}