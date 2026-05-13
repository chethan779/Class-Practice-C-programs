#include<stdio.h>

void copy_str(char *p , char *q)
{
    while(*q != '\0')
    {
        *p = *q;
        q++;
        p++; 
    }
}


int main(){
    char a[20] = "Chethan";
    char b[20];
 
    copy_str(b , a);

    printf("%s\n",b);

    return 0;
}