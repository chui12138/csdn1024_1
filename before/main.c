#include <stdio.h>

void print_dy(int di)
{
	int c=0;
	for(c;c<di;c++){
	int a=0,b=0;
	for(b;b<c;b++)
	{
		printf("%s"," ");
	}
	for(a;a<di-c;a++)
	{
		printf("%s","**");
	}
	printf("%s","\n");
	}
}
void print_kxjx(int c,int k)
{
	int a=0;
	for(a;a<c;a++)
	{
		int b=0;
		for(b;b<k;b++)
		{
			if(b==0||b==k-1||a==0||a==c-1)
				printf("%s","*");
			else printf("%s"," ");
		}
		printf("%s","\n");
	}
}
void print_jx(int c,int k)
{
	int a=0;
	for(a;a<c;a++)
	{
		int b=0;
		for(b;b<k;b++)
		{
			printf("%s","*");
		}
	printf("%s","\n");
	}
}
void print_hui(int k)
{
	int a=0;
	for(a;a<k;a++)
	{
		int b=0;
		for(b;b<k;b++)
		{
			if(b==0||b==k-1||a==0||a==k-1
				||((b==k/2-1||b==k/2+1||b==k/2)
				&&(a==k/2-1||a==k/2+1||a==k/2))
				&&!(a==k/2&&b==k/2))
				printf("%s","*");
			else printf("%s"," ");
		}
		printf("%s","\n");
	}
}

int main()
{
    printf("%s","hello world\n");
    print_hui(16);
}

