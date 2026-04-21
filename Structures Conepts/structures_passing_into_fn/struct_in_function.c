#include<stdio.h>
#include<string.h>

struct test
{
    int i;
    char a[20];
    float j;
};
struct test f1(struct test t)
{
    strcpy(t.a,"pqrstuv");
    return t;
}
void display(const struct test t);

int main()
{
    struct test t1={20,"xyz",78.5f};
    display(t1);
    t1=f1(t1);
    display(t1);  
    
    return 0;
}

void display(const struct test t)
{
    printf("%d %s %f\n",t.i,t.a,t.j);
}
