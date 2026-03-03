#include<stdio.h>

char* display()
{
    static char arr[]="PESU";
    return arr;
}
int main(){
    char *str;
    str=display();
    printf("%s\n",str);
    return 0;
}