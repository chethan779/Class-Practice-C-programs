#include<stdio.h>
#include<string.h>
//808
struct status
{
    int bin1:32;
	unsigned int bin2:2;
	
}s2={2,2};
int main()
{
	printf("size of the structure is %lu",sizeof(struct status));
	struct status s1;
	s1.bin1=-9;//cant store the value 20 since the range of values are 1 to 15
	s1.bin2=2;
	printf("%d %d",s1.bin1,s1.bin2);
		printf("%d %d",s2.bin1,s2.bin2);
		return 0;
		
}