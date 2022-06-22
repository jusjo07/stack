#include<stdio.h>
#include<stdlib.h>
#define size 100
int top=-1,n;
int stack[size];
int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}

}
int isempty()
{
	if(top==-1)
	{	
	 	return 1;
	}
	else 
	{
		return 0;	
	}
}
void push(int val)
{
	if(isfull())
	{
		printf("\n overflow");
	}
	else
	{
	top++;
	stack[top]=val;
	printf("\n %d pushed", stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("\n underflow");
	}
	else
	{
		printf("\n%d popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}
void findtop()
{
	printf("\n top position %d",top);
	printf("\n top value %d",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	printf("\n %d",stack[i]);
}
void main()
{	
	int ch,val,top,data;
	
	printf("enter stack size:");
	scanf("%d",&n);

	while(1)
	{
		printf("\n");
		printf("STACK OPERATIONS");
		printf("\n");
		printf("1.is empty \n2. is full\n3.Push\n4.pop\n5.Display\n6.Find top of stack\n 7.Exit\n");
		printf("enter choice");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				if(isempty())
				{
					printf("stack is empty");
					break;
				}
				else
				{
					printf("stack is not empty");
					break;
				}
			}
			case 2:
			{
				if(isfull())
				{
					printf("stack is full");
					break;
				}
				else
				{
					printf("stack is not full");
					break;
				}
			}
			case 3:
			{
				printf("enter value to be added to stack:");
				scanf("%d",&data);
				push(data);
				break;
			}
			case 4:
			{
				pop();
				break;
			}
			case 5:
			{
				display();
				break;
			}
			case 6:
			{
				findtop();
				break;
			}
			case 7:
			{
				printf("goodbye");
				exit(0);
			}
			default:
			{
				printf("invalid choice");
				break;
			}
		}
	}
}
	
	
