#include<stdio.h>
int main()
{
	char Name[50]="Shang-Heng Tsai";   
	//Name is a fixed char vector
	//Name[0],Name[1],Name[2],.......,Name[49]
	//Name[0]=S
	//Name[1]=h
	//Name[2]=a
	//Name[3]=n
	//......
	//Name[15]= \0
	printf("hello world!!\n");
	printf("%d\n",2+3);            // %d print an integer
	printf("%f\n",1.2+34.234);     // %f print a float number
	printf("%s\n",Name);
	printf("%c\n",Name[5]);
	printf("%s\n",Name+6);
	return 0;
 } 
