#include<stdio.h>
int main()
{
	int x,y;
	char ch;
	printf("enter the value of x and y");
	scanf("%d%d",&x,&y);
	printf("your choices are- '+'-Addition\n-subtraction\n*multiplication\n/divide\n%remiender\n");
	printf("enter your choice");
	scanf(" %c", &ch);
	switch(ch)
	{
		case '+' :
			printf("addintion of x and y=%d",x+y);
			break;
			case '-' :
			{  if (x>y)
			printf("x-y=%d",x-y);
			break;
			case '*' :
				printf("multiplication of x*y=%d",x*y);
				break;
				case'/' :
					{  if (x>y)
					printf("x/y=%d", x/y);
					else
					printf("y/x=%d", y/x);
					}
					break;
					case '%' :
					printf("x remiender y=%d",x%y);
					break;
					default:
					printf("wrong choice");
				}
                
}
}
