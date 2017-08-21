#include<stdio.h>
int top=-1;
void push(int[],int);
void pop(int[],int);
void display(int[],int);
main()
{
 int ch,a[5];
printf("1:Push\n2:Pop\n3:Exit\n ");
do
{
printf("\n Enter choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:push(a,5);
	display(a,5);
	break;
 case 2:pop(a,5);
	display(a,5);
	break;
 }
 }while(ch!=3);
}
 void push(int a[],int n)
 {int d;
 printf("\n Enter value:");
 scanf("%d",&d);
 if(top==4)
	printf("Array full!!");
 else
  a[++top]=d;
 }
 void pop(int a[],int n)
 { 
 if(top==-1)
 printf("Empty stack!!");
 else
 top--;
 }
void display(int a[],int n)
 {int i;
 if(top==-1)
 printf("Empty stack!!");
else
 {for(i=0;i<=top;i++)
   {
    printf("%d ",a[i]);
    }}}
