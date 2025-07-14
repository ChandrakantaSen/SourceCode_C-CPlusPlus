#include<stdio.h>
void main()
{
 char word[100];
 int i=0,vc=0,ascii_sum=0;
 clrscr();
 printf("\t\tEnter Any Word : ");
 //fflush(stdin);
 scanf("%s",word);
 printf("------------------------------\n");
 printf("Word in Vertical Form :\n");
 while(word[i]!='\0')
 {
	 switch(word[i])
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
				 vc++;
	}
	 ascii_sum+=word[i];
	 printf("\t\t\t%c\n",word[i]);
	 i++;
 }
 printf("-------------------------------\n");
 printf("Number of Vowels        => %3d\n",vc);
 printf("Sum of Ascii Values     => %3d\n",ascii_sum);
 printf("Word in Reverse order   => ");
 while(i>=0)
	printf("%c",word[i--]);
 getch();
 }