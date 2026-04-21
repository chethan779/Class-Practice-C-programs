#include<stdio.h>
#include<string.h>



/*Structures --> Have Seperaate Memory for each member
Unions ---> Have shared memory for each member*/


union Student_union
{
    int roll;/*4 bytes*/      /*These 3 members are in shared memory 
                    so when u print all of them at once 
                    only last assinged value is correct 
                    and others are overwritten
                    So u print one at a time after 
                    each assingning*/
    float marks;/*4 bytes*/
    char name[20];/*20 bytes*/
};

struct Student_struct{
    char name[20];  /*Here that padding thing makes the size
                    28 bytes instead of 20 . So if u use pragma
                    Padding avoided and gives 20 bytes*/
    int roll;
    float marks;
};

int main()
{

    union Student_union s1;
    s1.roll=20;      /*Can only access one member at a time
                    in unions .*/
    printf("Roll: %d\n",s1.roll);  // -> Roll: 20

    s1.marks=92.45;
    printf("Marks : %.2f\n",s1.marks); // --> Marks : 92.45

    strcpy(s1.name,"Chethan");
     printf("Name : %s\n",s1.name); // --> Name : Chethan



    printf("Roll: %d\n",s1.roll);     
    printf("Marks : %.2f\n",s1.marks);
     printf("Name : %s\n",s1.name);

    /*Roll: 1952802883
    Marks : 72702066619271469504894588682240.00
    Name : Chethan
    Therefore only last assinged value remained intact
    And remaining were overwritten due to shared memory*/

    printf("Size of Union Student : %d\n",sizeof(union Student_union));
    printf("Size of Struct Student : %d\n",sizeof(struct Student_struct));

    /*Size of Union Student : 20
    Size of Struct Student : 28*/
    return 0;
}

/*

Feature	 |       Structure	                          |                     Union
Memory	 |  Allocates memory for all members	      |    Allocates memory equal to largest member
Access	 |  All members can be accessed at once	      |   Only one member can be used at a time
Use Case |	When storing different data types together|	When storing data that can take multiple forms


*/