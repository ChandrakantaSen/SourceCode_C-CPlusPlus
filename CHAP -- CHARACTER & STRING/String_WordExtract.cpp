#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void main()
{
    clrscr();
    char str[50],temp[50][50];
    cout<<"Enter sentence: ";
    gets(str);
    int k=0,n=0;
    
    for(int j=0;j<str[j];j++)
    {
     if(str[j]==' ')
     {
       temp[n][k]='\0';
       n++;
       k=0;
     }
     else
     {
       temp[n][k]=str[j];
       k++;
     }
    }
    temp[n][k]='\0';
    char tt[20];
for(j=0;j<=n;j++)
{
 for(k=0;k<=n;k++)
 {
  if(temp[j][0]<temp[k][0])
  {
    strcpy(tt,temp[j]);
    strcpy(temp[j],temp[k]);
    strcpy(temp[k],tt);
  }
 }
}
for(j=0;j<=n;j++)
cout<<endl<<temp[j]<<endl;
getch();
}




