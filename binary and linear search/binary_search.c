#include<stdio.h>

void binary_search(int numbers[],int size_of_array,int find_element)
{  
    int low=0;
    int high=size_of_array-1;
    int check_point=0;

    while (low<=high)
    {
       int mid=(low+high)/2;

       if(numbers[mid]==find_element)
            {   if(mid+1==1)
                     printf("The element or the number %d has been found at the %dst position",find_element,mid+1);
                else if(mid+1==2)
                     printf("The element or the number %d has been found at the %dnd position",find_element,mid+1);
                else
                     printf("The element or the number %d has been found at the %dth position",find_element,mid+1);
            check_point=1;
            break;}
        else if(numbers[mid]<find_element)
            low=mid+1;
        else if(numbers[mid]>find_element)
            high=mid-1;
    }
    if (check_point==0)
                printf("Sorry my brother %d element was not found in the given array of numbers",find_element);
}    
int main()
{
    int num,numbers[]={1, 4, 16, 19, 20, 21, 29, 41, 43, 45 , 47 , 56 , 58 , 67 , 69 , 75 , 77 , 79 , 87 , 89, 94 , 96 , 99 , 107, 109 , 110};

    printf("Enter the number u wanna find in the given array\n");
    scanf("%d",&num);
    int length=sizeof(numbers)/sizeof(numbers[0]);
    binary_search(numbers,length,num);

    return 0;

}