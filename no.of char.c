#include<stdio.h>
#include<conio.h>
int main()
{
int count_words=0,i;
int count_char=0;
char str[20];
printf("Enter the string:");
gets(str);
for(i=0;str[i]!=NULL;i++)
{
count_char++;
if(str[i]==' ')
count_words++;
}
printf("\nNumber of characters in the string is:%d",count_char);
getch();
return 0;
}
