#include<stdio.h>
#include<string.h>

char hash_table[30];

int hash_function(char a)
{
 return (a%29)+1;
}

void main()
{
int i=0,position,j;
char string[20];
printf("Input String");
scanf("%s",string);
for(i=0;i<strlen(string);i++)
{
 position=hash_function(string[i]);
 if(hash_table[position]!=0)
   for(j=0;j<20;j++)
    if(hash_table[j]==0)
      position =j;
 hash_table[position]=string[i];
 printf("%c",hash_table[position]); //These lines are just to check
 printf("%d ",position);           //if the characters are added in the hashtable
}
for(i=0;i<30;i++)
 printf("%c",hash_table[i]);
printf(" ");
}
