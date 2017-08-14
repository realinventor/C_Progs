#include<stdio.h>

int top=-1;

void push(int a[100],int num)
{	if(top==100)
		printf("stack overflow");
	else
	a[++top]=num;
}
int pop(int a[100])
{	if(top==-1) 
		printf("stack empty");
	else
			return a[top--];
}


void main()
{	int i,ch,n,a[100],num,res;
	do{
	printf("\nEnter choice\n1.Push \n2.Pop \n3.Display \n4.Exit");
	scanf("%d",&ch);
	
	switch(ch)
	{case 1: printf("Enter element to be inserted");
		    scanf("%d",&num);
		    push(a,num);
		    break;
	case 2: res=pop(a);
		    printf("Deleted element is %d\n",res);
	        break;
	case 3: for(i=0;i<=top;i++)
		    {	printf("%d",a[i]);
		    	printf(" ");
		    }
		    printf("\n");
		    break;
	case 4: printf("Exiting..\n");
	        break;
	default:printf("Invalid");
	        break;
    }
	}while(ch!=4);
}


