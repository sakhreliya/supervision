#include<stdio.h>
int main()
{
	int *p;
	char data[1000];
	
	p=fopen("append.txt","a");
	
	if(p==0)
	{
		printf("file could note open");
	}
	else
	{
		printf("enter data=");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data add successfully");
	}
	
	fclose(p);
	printf("\n---Read data---\n");
	p=fopen("append.txt","a");
	
	if(p==0)
	{
		printf("file could note open");
	}
	else
	{
		while(fgets(data,30,p)!=0)
		{
			printf(data);
		}
	}
	
	fclose(p);
	return 0;
}

