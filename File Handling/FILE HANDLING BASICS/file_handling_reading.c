#include<stdio.h>
#include<unistd.h>

int main(){
    FILE *fp1 = fopen("data.txt" , "r");
    FILE *fp2 = fopen("output.txt" , "w");
    char ch[500];
    if(fp1 ==  NULL || fp2 ==NULL)              // change this to 2 and check the output
    {
        printf("issue in opeining the file\n");
    }
    else
    {
        while(fgets(ch , 25 , fp1) != NULL)
        {
            fputs(ch , fp2);
            sleep(1);
        }
        printf("%d\n",ftell(fp1));
    }
    fseek(fp1,5,SEEK_SET);
        printf("%d\n",ftell(fp1));
    fputs("Changes",fp2);
    fclose(fp1);
    return 0;
}

