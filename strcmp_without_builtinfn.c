#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Hello",str2[]="hello";
    char *ptr1,*ptr2;
    int flag=0;
    ptr1=str1;
    ptr2=str2;

    for (int i = 0; i < strlen(str1); i++)
    {
        if (*ptr1==*ptr2)
           flag=0;
        else if(*ptr1>*ptr2)
            {flag=1;
             break;}
        else
            {flag=-1;
             break;}  
    }

    printf("The equality of these two strings is %d",flag);
    
    
    return 0;
}