#include<stdio.h>
main()
{
	int to,tu,t,j;
	printf("%s\n","总共头数：");
	scanf("%d\n",&to);
	printf("%s\n","总共脚数：");
	scanf("%d\n",&tu);
	t=tu/2-to;
	j=to-t;
	printf("%s%d\n","兔子的数量：",t);
	printf("%s%d\n","鸡的数量：",j);
 } 
