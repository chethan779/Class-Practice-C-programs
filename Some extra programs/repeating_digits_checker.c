#include<stdio.h>

int main(){
    int arr[100],num,count=0;

    printf("Enter ur number here:\n");
    scanf("%d", &num);

    
        while (num!=0)
        {
            arr[count]=num%10;
            num=num/10;
            count+=1;
        }
        
    
    int found=0;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) { 
            if (arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }}

    if (found==1)
        printf("has repeated digits");
    else
        printf("Does not have repeated digits");
    
    
    return 0;
}