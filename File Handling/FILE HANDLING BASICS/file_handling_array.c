#include<stdio.h>
#include<unistd.h>
int read(int *a , FILE *p);
int main(){
    FILE *fp1 = fopen("data.txt","r");
    FILE *fp2 = fopen("out.txt","w");

    char ch[500];   // "a" -> only append, "w+" -> write and read , "a+" -> read and append 

    if(fp1 == NULL || fp2 == NULL)
    {
            printf("Problem in opening file!!!!");
    }
    else
    {
        int a[500];
        int n = read(a,fp1);
        
        fseek(fp1,-5,SEEK_CUR);

    }
} 