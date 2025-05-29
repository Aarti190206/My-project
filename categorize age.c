#include<stdio.h>
int main()
{
	int age;
	printf("enter your current age:");
	scanf("%d",&age);
	if(age>=0 && age<=12)
	{
		printf(" you are child");
	}
	else if(age>=13 && age<=19)
	{
		printf("you are teenger");
	}
	else if(age>=20 && age<=30)
	{
		printf("you are young adult");
	}
	else if(age<=60)
	{
		("you are senior");
	}
	else
	{
		printf("invalid age");
	}
	return 0;
}
