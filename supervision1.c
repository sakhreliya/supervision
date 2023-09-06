#include<stdio.h>
int main()
{
	int *p;
	char data[1000];
	p=fopen("write.txt","r");
	
	if(p==0)
	{
		printf("File could note open");
	}
	else
	{
		printf("file open successfully\n");
		while(fgets(data,30,p)!=0)
		{
			printf(data);
		}
	}
	fclose(p);
	return 0;
}
