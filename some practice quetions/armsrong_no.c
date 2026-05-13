#include<stdio.h>
#include<math.h>



int count(int num)
{int count = 0;
    while (num!=0)
    {
        num/=10;
        count++;
    }
    return count;
}

int main(){
   int num;
   printf("Enter ur num : ");
   scanf("%d", &num);

   int num1 = num;
   int rem , sum = 0;
   int count1= count(num);
   for (int i = 0; i < count1; i++)
   {
        rem = num % 10;
        sum += pow(rem,count1);
        num/=10;
   }
   
   if(sum == num1)
   {
        printf("It is armstrong!!!");
   }
   else{
    printf("It is not an armstrong!!");
   }

    return 0;
}

