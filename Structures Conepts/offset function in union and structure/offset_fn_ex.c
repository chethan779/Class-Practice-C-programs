#include<stdio.h>
#include<stddef.h>    // For offset fn.

union A
{
    int x;
    int y;
    int z;
};

struct B
{
    int x;
    int y;
    int z;
};

int main()
{
    printf("%lu\n",offsetof(union A,x));  // 0

    printf("%lu\n",offsetof(struct B,z)); //0

}
