#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<conio.h>
#include<iomanip.h>
const char*filename="BINARY";
void main()
{
	clrscr();
	float height[4]={175.5,153.0,167.25,160.70};
	ofstream outfile;
	outfile.open(filename);
	outfile.write((char*)&height,sizeof(height));
	outfile.close();
	for(int i=0;i<4;i++)
	height[i]=0;
	ifstream infile;
	infile.open(filename);
	infile.read((char*)&height,sizeof(height));
	for(i=0;i<4;i++)
	{
	    cout.setf(ios::showpoint);
	    cout<<setw(10)<<setprecision(2)<<height[i];
	}
	infile.close();
getch();
}