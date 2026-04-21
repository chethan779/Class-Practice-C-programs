#include<stdio.h>

struct test
{
    int i;
        struct test2
        {
            char a;
            float k;
        }u;
};

void main()
{
    printf("%lu\n",sizeof(struct test));

    struct test2 t2;   // allowed

    //t2.j=78;
    t2.k=45.6;
    printf("K is %f\n",t2.k);

    

}


