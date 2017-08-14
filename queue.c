#include<stdio.h>

void add(int que[], int *last, int n)
{
	if((*last)<n)
	{	printf("Enter value: ");
		scanf("%d", &que[++(*last)]);
	}
	else
	{
		printf("Queue is full!");
	}

}


void del(int que[], int *last)
{	int i;
	if((*last)==-1)
		printf("Queue is empty!");
	else
	{	printf("%d", que[0]);
		for(i=0;i<(*last);i++)
			que[i] = que[i+1];
		(*last)--;
	}
}

void show(int que[], int *last)
{	int i;
	if((*last)==-1)
		printf("Empty queue");
	else
	{	for(i=0;i<=(*last);i++)
			printf("%d\t", que[i]);
	}
}

void main() 
{
	int que[20], n, first=-1, last=-1, ch;
	printf("Enter maximum queu length");
	scanf("%d", &n);
	do{
	printf("\n1.Add\n2.Delete\n3.Show\n4.Exit\nEnter choice: ");
	scanf("%d",&ch);
	switch(ch)
	{	case 1:	add(que, &last, n);
			break;
		case 2: del(que, &last);
			break;
		case 3: show(que, &last);
			break;
		case 4: printf("Exiting...");
			break;
		default:printf("Invalid entry!");
			break;
	}
	}while(ch!=4);

}
