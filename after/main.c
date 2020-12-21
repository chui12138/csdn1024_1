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
void jx(int a,int b)//空心矩形比较简单
{
	pline(a,'*');
	n();
	for(int i=0;i<b-2;i++)
	{
		pline(1,'*');
		pline(a-2,' ');//实心矩形只要改成‘*’就可以
		pline(1,'*');
		n();
	}
	pline(a,'*');
}
void hui(int a,int b)
//回型两个空心正方形组合,a是外部正方形大小，b是内部大小,默认是奇数
{
	pline(a,'*');
	n();
	for(int i=0;i<(a-b-2)/2;i++)
	{
		pline(1,'*');
		pline(a-2,' ');
		pline(1,'*');
		n();
	}
	pline(1,'*');
	pline((a-b-2)/2,' ');
	pline(b,'*');
	pline((a-b-2)/2,' ');
	pline(1,'*');
	n();
	for(int i=0;i<(b-2);i++)
	{
		pline(1,'*');
		pline((a-b-2)/2,' ');
		pline(1,'*');
		pline(b-2,' ');
		pline(1,'*');
		pline((a-b-2)/2,' ');
		pline(1,'*');
		n();
	}

	pline(1,'*');
	pline((a-b-2)/2,' ');
	pline(b,'*');
	pline((a-b-2)/2,' ');
	pline(1,'*');
	n();
	
	for(int i=0;i<(a-b-2)/2;i++)
	{
		pline(1,'*');
		pline(a-2,' ');
		pline(1,'*');
		n();
	}
	
	pline(a,'*');
}
void lingx(int a)//菱形对角线一半长度为a
{
	/*前两行打印方法,类似打印两个等腰三角形拼在一起
	pline(a,' ');
	pline(1,'*');
	n();
	pline(a-1,' ');
	pline(3,'*');
	n();*/
	for(int i=0;i<a;i++)
	{
		pline(a-i,' ');
		pline(1+i*2,'*');
		n();
	}
	for(int i=1;i<a;i++)
	{
		pline(1+i,' ');
		pline(1+(a-i-1)*2,'*');
		n();
	}
}
int main()
{
	dysj(6);
	n();
	jx(8,4);
	n();
	hui(11,7);
	n();
	lingx(8);
	return 0;
}
