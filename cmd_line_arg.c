#include<stdio.h>

int main(int argc,char argv[]){ //argc-----> Argument Count 
    //FORMAT int main(int argument_count , char argument_vector)
    //ARGUMENTS STORED IN CHAR DATATYPE

    int sum;
    sum=atoi(argv[0])+atoi(argv[1]);    //ATOI --> ASCII TO INTEGER
    // IF NOT USED ATOI IT WILL BE '1'+'2'

    
    return 0;
}