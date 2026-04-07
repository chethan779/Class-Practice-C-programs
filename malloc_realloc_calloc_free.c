#include<stdio.h>
#include<stdlib.h>
int main(){
    int num[10],*ptr;

    /*RETURN VALUE OF MALLOC ---> POINTER  TO CALLING FUNC IT RETURNS
      MALLOC WILL RETURN --> VOID POINTER OR GENERIC POINTER(DEFAULT)
      IF U WANT OTHER U HV TO TYPECAST 
      DEFAULT --> VOID MALLOC()  TYPECASTING--> (INT *) MALLOC()*/

    /*MALLOC() IN HEAP MEMORY IF NOT USED SPACE IT WILL HV GARBAGE
    VALUES AND NOT ZEROS WHERE ARRAY DOES IN STATIC THING
    
     MALLOC(10*SIZEOF(INT))*/
     int n ; scanf("%d",&n);
     int * x=(int *)malloc(20);

    int * y=(int *)calloc(n,sizeof(int)); // calloc initializes the memory to 0

    for (int i = 0; i < n; i++)
      scanf("%d",(y+i));

    for (int i = 0; i < n; i++)
      printf("%d ",*(y+i));

    // int *ptr1=(int *)realloc(y,7);

    /*1st option ----> EXTEND THE EXISTIN MEMORY ALLOCATION IN HEAP AND GIVE 1ST VALUE ADRESS TO THE *PTR1
      2ND OPTION ----> FIND A NEW LOCATION AND COPY THE OLD VALUES TO THE NEW ADDRESS AND GIVE IT TO THE *PTR1
      3RD OPTION ----> UNSUCCESSFUL FIND FOR NEW LOCAATION IF EXTENDING OF THE OLD MEMORY NOT POSSIBLE
                       BASICALLY THE 2ND OPTION NOT WORKING COZ OF NO NEW LOCATION FOUND*/


                       

    printf("\n");
    // TWO ARGUMENTS FOR --> CALLOC(NO. OF ELEMENTS , SIZE OF ELEMENT)
   //calloc() return ---> pointer (void pointer)
   /* if sizeof(int) ---> default 0 in memory 
      if sizeof(float) ---> default 0.0 in memory
      if sizeof(char) ---> default '\0' (null char) in memory*/



    free(y);

    /*free ---> CHANGES AVAILABILITY OF PTR Y IT MAKES IT NOT AVAILABLE FOR NOW U CANT ACESS
      */

      for (int i = 0; i < n; i++)
          printf("%d ",*(y+i));
      
      /*THIS THING WHEN WE PRINT AFTER FREE WE MAY GET GARBAGE VALUE OR THE PREVIOUS VALUE STORED
      IN THERE OR BOTH*/

      
    
    return 0;
}