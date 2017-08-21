#include<stdio.h>
#include<string.h>

char hash_table[27];

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
 for(j=0;j<25;j++)
  if(hash_table[j]==0)
   position =j;
 hash_table[position]=string[i];
printf("%d ",position);
}

}
