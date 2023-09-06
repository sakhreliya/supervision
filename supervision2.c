#include<stdio.h>
int main()
{
	int *p;
	char data[1000];
	
	p=fopen("reading.txt","w");
	
	if(p==0)
	{
		printf("file could note open");
	}
	else
	{
		printf("enter data=");
		gets(data);
		fputs(data,p);
		printf("data add successfully");
	}
	
	fclose(p);
	return 0;
}

