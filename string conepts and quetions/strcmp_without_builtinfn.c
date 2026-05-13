#include<stdio.h>
#include<string.h>
int my_strcmp(char* ptr1 ,char* ptr2)
{
    for (int i = 0; i < strlen(ptr1); i++)
    {
        if (*ptr1==*ptr2)
           return 0;
        else if(*ptr1>*ptr2)
            {return 1;
             break;}
        else
            {return -1;
             break;}  
    }
}


int main(){
    char str1[]="Hello",str2[]="hello";
    
    int result=my_strcmp(str1,str2);

    printf("The equality of these two strings is %d",result);
    return 0;
}