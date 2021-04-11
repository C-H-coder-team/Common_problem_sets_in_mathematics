#include<iostream>
using namespace std;
int main()
{
	double to,tu,t,j;
	cout<<"总共头数："<<endl;
	cin>>to;
	cout<<"总共脚数：" <<endl;
	cin>>tu;
	t=tu/2-to;
	j=to-t;
	cout<<"兔子的数量："<<t<<endl;
	cout<<"鸡的数量："<<j;
	system("pause");
	return 0;
 } 
