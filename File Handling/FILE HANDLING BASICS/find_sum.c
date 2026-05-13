#include<stdio.h>
#include<unistd.h>
#include<errno.h>

int my_read(int *a, int n,FILE *fp);
int find_sum(int *a, int n);

int main(){
    
    FILE *fp1 = fopen("formatted_dat.txt","r");  /*If opened in w+ mode and ran the code the data in the formatted_data will be erased . Not like r+ that is                                              the main difference between w+ and r+                                                                         As it delets the contents in file as it is opened in that mode 
                                                                              a+ it just retains the data and appends whatever given next*/
    FILE *fp2 = fopen("formatted_out.txt","w");

    if(fp1==NULL || fp2 ==NULL)
        perror("issue in opening the file ");   // perror prints the error directly without error number it prints whta assigned to it

    int a[500]; int n = 5;
    my_read(a,n,fp1);
    int sum = find_sum(a,n);
    //fprintf(stdout,"sum is %d",sum);
    fprintf(fp2,"sum is %d",sum);
    fclose(fp1); fclose(fp2);
    return 0;
    }

int my_read(int *a, int n,FILE *fp) {
    int i;
    for(i = 0;i<n;i++)
        fscanf(fp,"%d",a+i); 
    }

int find_sum(int *a, int n) {
    int i , sum = 0;
    for(i = 0;i<n;i++)
        sum = sum+*(a+i); 
    return sum;
}   
