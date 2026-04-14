#include<stdio.h>
#include<string.h>
struct test
{
    int i;
    char a[20];
    float j;
};
void f1(struct test t)  /*t recieving t1's contents . but t has its own adress 
                        and any changes on t1 doesnt affect t*/
{
    strcpy(t.a,"pqr");
}

void f2(struct test* p)       /*Here u r passing adress of that function
                                so its not copy its original itself*/
{
    strcpy(p->a,"pqr");
}

void f3(const struct test* p)
{
    // strcpy(p->a,"pqr");
    printf("%s\n",p->a);
}

int main(){
    struct test t1={20,"xyz",78.5f};
    printf("%s",t1.a);
    f1(t1);
    printf("%s",t1.a); //xyz
    return 0;
}