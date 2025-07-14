#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x)
void main()
{
	float a,b,n,h,x[10],y[10];
	float i,I1,I2,I3;
	static float temp;
	clrscr();
	printf("\nEnter the value of n:\t");
	scanf("%f",&n);
	printf("\nEnter the lower_limit and upper_limit:\t");
	scanf("%f %f",&a,&b);
	x[0]=a;
	h=((b-a)/n);
	for(i=0;i<n;i++)
	{
		y[i]=f(x[i]);
		if(i==n)
			goto line;
		else
			x[i+1]=x[i]+h;
	}
	line:
	I1=0;
	for(i=0;i<=(n-1);i++)
	{
		temp=(double)(h/2)*(h/2)*(y[i]+y[i+1]);
		I1=I1+(h/2)*temp;
	}
	printf("\n\nReqired Solution for I1:\t%f",I1);
	I2=0;
	for(i=0;i<=(n-1);i+=2)
	{
		temp=(double)(y[i]+4*y[i+1]+y[i+2]);
		I2=I2+(h/3)*temp;
	}
	printf("\n\nReqired Solution for I2:\t%f",I2);
	I3=0;
	for(i=0;i<=(n-5);i+=6)
	{
		temp=(double)(y[i]+5*y[i+1]+y[i+2]+6*y[i+3]+y[i+4]+5*y[i+5]+y[i+6]);
		I3=I3+(3*h/10)*temp;
	}
	printf("\n\n\nReqired Solution for I3:\t%f",I3);
	printf("\n\n\n\nRequired solution:\t%f\t%f\t%f",I1,I2,I3);
	getch();
}