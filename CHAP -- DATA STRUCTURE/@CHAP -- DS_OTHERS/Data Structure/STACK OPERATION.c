/*write a program to implement stack operation*/
#include<stdio.h>
#include<conio.h>
#define MAX 5
int st[MAX],top=-1;
void push(int st[], int val);
int pop(int st[]);
void display(int st[]);
main()
{
int val,option;
/*clrscr();*/
do
{
printf("\n *****MAIN MENU*****");
printf("\n 1. PUSH");
printf("\n 2. POP");
printf("\n 3. Display");
printf("\n *********************");
printf("\n\n Enter your option:");
scanf("%d",&option);
switch (option)
{
case 1:
printf("\n Enter the number to be pushed onto the stack:");
scanf("%d",&val);
push(st,val);
break;
case 2:
val=pop(st);
printf("\n The value deleted from the stack is:%d",val);
break;
case 3:
display(st);
break;
}
}
while(option !=5);
getch();
return 0;
}
void push(int st[],int val)
{
if(top==MAX-1)
{
printf("\n STACK OVERFLOW");
}
else
{
top++;
st[top]=val;
}
}
int pop(int st[])
{
int val;
if(top==-1)
{
printf("\n STACK UNDERFLOW");
return-1;
}
else
{
val=st[top];
top--;
return val;
}
}
void display(int st[])
{
int i;
if(top==-1)
printf("\n STACK IS EMPTY");
else
{
for(i=top; i>=0; i--)
printf("\n%d",st[i]);
}
}
