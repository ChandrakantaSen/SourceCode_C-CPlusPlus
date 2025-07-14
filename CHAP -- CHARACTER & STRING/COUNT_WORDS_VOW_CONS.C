#include<stdio.h>
#include<conio.h>
void main()
{
char text[80];
int i=0,vowel_c=0,space_c=0,number_c=0,spl_c=0,consonant_c=0,a_count=0,word_count;
clrscr();
printf("Enter any text:");
gets(text);
while(text[i]!='\0')
{
switch(text[i])
{
case 'a':
case 'A':
a_count++;
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'u':
	case 'U':
vowel_c++;break;
	case ' ':
space_c++;break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
number_c++;break;
	case ';':
	case ',':
	case '.':
	case '!':
	case '/':
	case '+':
	case '-':
	case '*':
//	case '\':
spl_c++;break;
default:
consonant_c++;
}/*end of switch*/
i++;
}/*end of while*/
word_count=space_c+1;
printf("\n\n\t number of vowels=%.d\n",vowel_c);
printf("\n\n\t number of consonent=%3d\n",consonant_c);
printf("\n\n\t number of numbers=%3d\n",number_c);
printf("\n\n\t number of spaces=%3d\n",space_c);
printf("\n\n\t number of spl.chars.=%3d\n",spl_c);
printf("\t............................\n");
printf("\t Total number of chars.=%3d\n",i);
printf("\t............................\n");
printf("\t number of 'A'or'a' present=%d\n",a_count);
printf("\t*Number of words=%3d",word_count);
getch();
}

