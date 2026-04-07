#include<stdio.h>

int main(){
    int arr[6]={1,5,3,2,8,1};
    int *ptr;
    int max=0;

    ptr=arr;

    for (int i = 0; i <6; i++)
    {
        ptr=&arr[i];
        if(*ptr>max){

            max=*ptr;
            ptr++;
        }

    }
    


   printf("The maximum element is: %d\n", max);
    return 0;
}