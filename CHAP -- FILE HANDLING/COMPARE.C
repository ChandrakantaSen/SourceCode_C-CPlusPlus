#include<stdio.h>
#include<conio.h>
void main()
{

     FILE *fp1,*fp2;
     int ca,cb;
     char fname1[40],fname2[40];
clrscr();
printf("ENTER FIRST FILENAME:-");
gets(fname1);
printf("ENTER SECOND FILENAME:-");
gets(fname2);
fp1=fopen(fname1,"r");                  /*open for reading*/
fp2=fopen(fname2,"r");                  /*open for reading*/
if(fp1==NULL)                     /*check does file exist etc*/
{
printf("cannot open %s for reading \n", fname1);
	      /* terminate program*/
}

else if(fp2==NULL)
{
printf("Cannot open %s for reading \n", fname2);
//exit(1);       /* terminate program */
}
 else     /* both files opned successfully */
{
   ca=getc(fp1);
   cb=getc(fp2);
while(ca!=EOF && cb!=EOF && ca==cb)
{
     ca=getc(fp1);
     cb=getc(fp2);
 }
if(ca==cb)
printf("file are identical \n");
else if(ca!=cb)
 printf("files are  different \n");
}
fclose(fp1);
fclose(fp2);


getch();
}








































































































































