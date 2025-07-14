#include<stdio.h>
#include<conio.h>

main()
{

char cl='\0';
clrscr();
printf("\n Enter any chacter:");
scanf("%c",&cl);
switch(cl)
{
case 'a':
	 case 'A':
	 case 'e':
	 case 'E':
	 case 'i':
	 case 'I':
	 case 'o':
	 case 'O':
	 case 'u':
	 case 'U':   
	 case '!':
	 case '@':
printf("\n this is a special character:%c",cl);
break;

default:
printf("\n this is  a consonent: %c",cl);
break;
}


getch();
}


