#include <stdio.h>
void pline(int n,char c)//打印n个c字符
{
	for(int i=0;i<n;i++)
		printf("%c",c);
	return;
}
void n()//打印换行
{	
	printf("%s","\n");
}
void dysj(int d)//打印等腰三角形
{
/*先考虑打印一行
 	pline(d,' ');
	pline(1,'*');
	n();
  在考虑打印第二行
  	pline(d-1,' ');
  	pline(2,'*');
	n();
  此时已经可以归纳出后续代码
*/
	for(int i=1;i<=d;i++)
	{
		pline(d-i,' ');
		pline(i,'*');
		n();
	}
}
int main()
{
	pline(5,'*');
	n();
	printf("hello world");
	n();
	dysj(6);
}
