 #include<stdio.h>
 
 int main(){
    int n,find,flag=0;
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter elements in matrix:\n");
    for(int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("Enter search element here:\n");
    scanf("%d",&find);
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==find)
            printf("The element %d is found at %d position\n",find,i+1);
            flag=1;
    }
    
    if(flag=0)
        printf("The element %d not found!!!",find);
     return 0;
 }