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
  	pline(3,'*');
	n();
  此时已经可以归纳出后续代码
*/
	for(int i=0;i<d;i++)
	{
		pline(d-i-1,' ');
		pline(1+i*2,'*');
		n();
	}
}
int main()
{
	dysj(6);
}
