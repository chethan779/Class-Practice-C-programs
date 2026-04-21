#include<stdio.h>
struct status
{
  unsigned int bin1:1;    // 1 bit allocated for bin1 only 2 digits can be stored 0 and 1
  unsigned int bin2:1;//here the size is 4 bytes or 16bits only 2 are used rest are padded
  int bin3:3
};
int main()
{
//  printf("size of structure is %lu \n",sizeof(struct stau));
}