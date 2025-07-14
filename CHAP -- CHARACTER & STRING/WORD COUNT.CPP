#include<stdio.h>
#include<string.h>
#include<iostream.h>
#include<conio.h>
void main()
{
char text[2000],ch;
int i=0,wc,word_count(char *);
void sort_text(char *);
clrscr();
cout<<"Enter any text ... \n";
do{
  ch=getch();
  if(ch==27)  { text[i]='\0'; break; }
  putchar(ch); text[i++]=ch;
  if(ch==13) cout<<"\n";
}while(1);
cout<<"\t\t\t\t OUTPUTS\n\n";
cout<<"The total number of words = %d\n"<<word_count(text);
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
cout<<"Words are in sorted order along with the frequency of words\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
sort_text(text);
getch();
}
/********************* end of main() ****************/
int word_count(char temp[])   /* Function for counting the words */
{
 int wc=1,i=0;
 while(temp[i++]!='\0')
  if(temp[i-1]==' '||temp[i-1]==13) wc++;
 return(wc);
}
/****************************************************/
int sort_text(char *temp)
{
 char wd[80][80],tt[80],tmp[80];
 int i=0,j=0,k=0,count;
 while(temp[i++]!='\0')
 {
    tt[j++]=temp[i-1];
    if(temp[i]==' '||temp[i]==13)
    {  tt[j]='\0';  strcpy(wd[k++],tt);j=0;i++;}
 }
 tt[j]='\0'; strcpy(wd[k],tt);
/*********************/
for(i=0;i<k-1;i++)
{
 for(j=i+1;j<k;j++)
 {
  if(strcmp(wd[i],wd[j])>0)
    {
      strcpy(tmp,wd[i]);
      strcpy(wd[i],wd[j]);
      strcpy(wd[j],tmp);
    }
 }
}
/****** sorting complete **************/
/****** list the words   **************/
count=1;
strcpy(tmp,wd[0]);
for(i=1;i<=k;i++)
{
 if(strcmp(tmp,wd[i])==0)
    { count++; continue; }
 cout<<"%-20s ---- %10d\n",tmp,count;
 count=1; strcpy(tmp,wd[i]);
}
}