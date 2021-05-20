#include<stdio.h>
int main()
{
    double x,y;
	char ch;
	printf("enter the value of x and y");
	scanf("%lf%lf",&x,&y);
	printf("your choices are- +addition\n-subtraction\n*multiplication\n/divide\n");
	printf("enter your choice");
	scanf(" %c", &ch);
	switch(ch)
	{
		case '+' :
			printf("addintion of x and y=%lf",x+y);
			break;
			case '-' :
			{ 
			printf("x-y=%lf",x-y);
			break;
			case '*' :
				printf("multiplication of x*y=%lf",x*y);
				break;
				case'/' :
					{ 
					printf("x/y=%lf", x/y);
					}
					break;

					default:
					printf("wrong choice");
				}

}
}
