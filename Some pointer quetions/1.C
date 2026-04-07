#include<stdio.h>

int main()
{   char arr[]="Hello";
    char *str=arr;

    str=arr;
    printf("%p\n",str);


    printf("%p\n",&str);

    printf("%s\n",str);

    printf("%d\n",str);

    *str='h';
    printf("%p\n",str);


    printf("%p\n",&str);

    printf("%s\n",str);

    printf("%d\n",str);

    





}