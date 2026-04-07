#include<stdio.h>

struct student
{
    int sub1;
    int sub2;
    int sub3;
    int total;
}st[3],st4[3]={{78,68,100,0},{94,78,67,0},{98,99,69,0}};  /*initializing total to 0*/



int main(){
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &st[i].sub1,&st[i].sub2,&st[i].sub3);
        st[i].total=st[i].sub1+st[i].sub2+st[i].sub3;
        printf("The total marks of each student is %d",st[i].total);
    }
    

    return 0;
}