#include<stdio.h>
#include<conio.h>
#define size 3
void push();
void pop();
void display();
int stack[size],top;
void main()
{
int ch;
clrscr();
top=-1;
printf("\n MAIN MENU:\n \t 1.push \n \t 2.pop \n \t 3.display \n");
while(1)
{
printf("\n Enter ur choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
default: return;
getch();
}
}
}
void push()
{
int num;
if(top==size-1)
printf("\n OVERFLOW\n");
else
{
printf("\n number u wish to push:\n");
scanf("%d",&num);
top++;
stack[top]=num;
printf("Pushed number is %d",stack[top]);
}
}
void pop()
{
if(top==-1)
printf("\n UNDERFLOW\n");
else
{
printf("Poped number is %d",stack[top]);
top--;
}
}
void display()
{
int i;
if(top==-1)
printf("\n The stack is empty.\n");
else
 {
 for(i=top;i>=0;i--)
 printf("%d \n",stack[i]);
 }
 }
