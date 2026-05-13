#include<stdio.h>


int main()
{
 FILE* fp=fopen("data.txt","r");

 if(fp==NULL)
   printf("file cannot be opened\n");
 else
  {
   char ch;
   while((ch=fgetc(fp)) != EOF)    /*   OR U CAN WRITE   ------>   while(!feop(fp))    */
    {
     //printf("%c",ch);
     fputc(ch,stdout);//instead of stdout we can write the file "output.txt"
     //ch=fgetc(fp);
     //sleep(2);
    }
   fclose(fp);
  }
 return 0;
}