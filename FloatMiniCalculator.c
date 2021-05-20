#include<stdio.h>
int main()
{
    float x,y;
	char ch;
	printf("enter the value of x and y");
	scanf("%f%f",&x,&y);
	printf("your choices are- +addition\n-subtraction\n*multiplication\n/divide\n");
	printf("enter your choice");
	scanf(" %c", &ch);
	switch(ch)
	{
		case '+' :
			printf("addintion of x and y=%f",x+y);
			break;
			case '-' :
			{ 
			printf("x-y=%f",x-y);
			break;
			case '*' :
				printf("multiplication of x*y=%f",x*y);
				break;
				case'/' :
					{ 
					printf("x/y=%f", x/y);
					}
					break;
					
					default:
					printf("wrong choice");
				}
                
}
}
