#include<stdio.h>
#include<math.h>
main()
{
	float x1,y1,x2,y2,dis;
	scanf("%f",&x1);
	scanf("%f",&y1);
	scanf("%f",&x2);
	scanf("%f",&y2);
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("%.8lf",dis);
 } 
