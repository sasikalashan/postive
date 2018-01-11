#include<stdio.h>
int main()
{
char letter;
printf("enter the letter\n");
scanf("%c",& letter);
if(letter>='a'&& letter<='z'||letter>='A'&& letter<='Z')
printf("alphabet", letter);
else
printf("not alphabet", letter);
return 0;
}

