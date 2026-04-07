#include<stdio.h>

struct test1
{
    int i;
    char ch;
};




int main(){

    printf("%d\n",sizeof(struct test1));
        struct test1 t1={25,'w'};
        struct test1 t2=t1;  //MEMBERWISE COPYING DONE HERE

        printf("addresses are %p and %p\n",t1,t2);
        printf("%p %p\n",&t1.i,&t2.i);
        printf("%c %c\n",t1.ch,t2.ch);
        printf("%p %p\n",&t1.ch,&t2.ch);

        t1.i=189;
        printf("%d %d\n",t1.i,t2.i);
        printf("%c %c",t1.ch,t2.ch);

    return 0;
}