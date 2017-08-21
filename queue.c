#include<stdio.h>
int f=-1,r=-1;
void qdisplay(int a[])
{
int i;
if(f==-1)
{ printf("Empty Queue!");}
else
 {
 for(i=f;i<=r;i++)
   {printf(" %d ",a[i]);}
 }
}
void qinsert(int a[])
{
if(r==4)
 {printf("Queue is full!");}
else if(r==-1)
 {f++;r++;
  printf("\n Enter value: ");
  scanf("%d",&a[r]);
 }
else
 {r++;
 printf("\n Enter value: ");
 scanf("%d",&a[r]);}
}
void qdelete(int a[])
{
if(f==-1)
 {printf("Empty Queue!");}
else
 {
  if(f==r)
   {f=r=-1;}
  else
   {f++;}
  }
}
main()
{
int a[5],ch;
printf("1:Insert\n2:Delete\n3:Exit\n");
do
{printf("\n Enter choice: ");
 scanf("%d",&ch);
 switch(ch)

 {
 case 1:qinsert(a);
	qdisplay(a);
	break;
 case 2:qdelete(a);
	qdisplay(a);
	break;
 }
}while(ch!=3);
}

