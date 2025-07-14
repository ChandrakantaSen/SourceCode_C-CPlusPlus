/* Multiple two matrices */
/* MULT_MAT.c */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define row 10
#define col 10

int i,j;
int row1,col1;
int row2,col2;
float mat1[row][col];
float mat2[row][col];
float mat_res[row][col];
void mat_mult(float mat1[row][col],int,int,float,mat2[row][col],int,int,float,mat_res[row][col]);
void display(float mat[row][col],int,int);
void input(float mat[row][col],int,int);
/*funtion to multiply two matrices*/
void mat_mult(float mat[row][col],int row1,int col1,float mat2[row][col],int row2,int col2,float mat_res[row][col])
{
int i,j,k;
if(col1==row2)
{
printf("\n Multipication is possible & Result is as follows\n");
for(i=0;i<row;i++)
for(j=0;j<col2;j++)
{
	mat_res[i][j]=0;
		for(k = 0;k < col1;k++)
{
			mat_res[i][j]+=mat1[i][k]*mat2[k][j];
	}
display(mat_res,row1,col2);
}
	else
		printf("\n Multiplication is not possible");
//exit(0);
}
//output function*/


void display(float mat[row][col],int r,int c)
{
for (i = 0;i < r;i++)
{
	for(j = 0 ;j < c ;j++)
{
	printf