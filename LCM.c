#include<stdio.h>
int lcm(int a, int b);
main()
{
	int num1, num2, LCM;
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
	LCM=lcm(num2, num1);
	else
	{
	LCM=lcm(num1,num2);
	}
	printf("LCM of %d and %d=%d",num1,num2,LCM);
}
int lcm(int a, int b)
{
	int multiple = 0;
	multiple = multiple+b;
	if ((multiple%a==0)&&(multiple%b==0))
	{
		return multiple;
	}
	else 
	{
		return lcm(a,b);
	}
}
