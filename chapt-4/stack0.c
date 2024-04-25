//Exercise 4-4. Add the commands to print the top elements of the stack without popping, to duplicate it, and to swap the top two elements. Add a command to clear the stack. 
#include <stdio.h>
int sp=0;
char stack[100];
void push(int element);
int pop(void);
int main()
{
	int i,element,option,cnt=0,duplicate[100],tmp;
	char command[100];
	printf("Enter elements to push into the stack\nEnter 0 for exit\n");
	while(1)
	{
		scanf("%d",&element);
		if(element==0)
			break;
		push(element);
		cnt++;
	}
	while(1)
	{
		printf("choose your options:\n1.Top elements of stack.\n2.Duplicate elemenets.\n3.swap top two elements.\n4.clear stack.\nEnter your option:");
		scanf("%d",&option);
		switch(option)
		{
			case 1: for(i=0;i<2;i++)
					printf("%d\n",stack[i]);
				break;
			case 2: for(i=0;i<cnt;i++)
					duplicate[i]=stack[i];
				break;
			case 3:	tmp=stack[0];
				stack[0]=stack[1];
				stack[1]=tmp;
				break;
			case 4: for(i=0;i<cnt;i++)
					stack[i]=0;
				break;
			default: printf("Wrong option\n");	
				 break;			
		}
	}
}
void push(int element)
{
	if(sp<100)
		stack[sp++]=element;
	else
		printf("Stack is full\n");
}

int pop(void)
{
	if(sp>0)
		return stack[--sp];
	else
		printf("Stack is empty\n");
}

