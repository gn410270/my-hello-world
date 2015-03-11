#include<stdio.h>
int main()
{
	int i;
	char Name[50]="Shang-Heng Tsai";   
	//Name is a fixed char vector
	//Name[0],Name[1],Name[2],.......,Name[49]
	//Name[0]=S
	//Name[1]=h
	//Name[2]=a
	//Name[3]=n
	//Name[4]=g
	//......
	//Name[15]= \0
	printf("hello world!!\n");
	printf("%d\n",2+3);            // %d print an integer
	printf("%f\n",1.2+34.234);     // %f print a float number
	printf("%s\n",Name);
	printf("%c\n",Name[5]);
	printf("%s\n",Name+6);
	printf("%u\n",Name);     // %u print un-sign integer  有點像正整數 
	printf("%u\n",Name+3);
	for (i=0;i<50;i++)
	{
		printf("%d : %c - %u\n",i,Name[i],Name[i]);
	}
	return 0;
 } 
