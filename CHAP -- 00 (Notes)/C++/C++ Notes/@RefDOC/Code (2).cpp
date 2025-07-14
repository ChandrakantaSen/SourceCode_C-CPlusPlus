#include<iostream.h>
#include<conio.h>

class palindrome
{
	int n,temp,d,sum;
	palindrome()
	{
		n = 131;
		temp = 0;
		sum = 0;
	}
	palindrome(int x)
	{
		n =x;
	}
	palindrome(int y)
	{
		n=y;
	}
	
	void IsPalindrome()
	{
		temp =n;
		
		while(temp != 0)
		{
			d = temp % 10;
			sum = sum * 10 + d; 
			temp = temp / 10;
		}		
		
		if(sum == n)
		{
			cout<<sum<<" is Palindrome";
		}
		else
		{
			cout<<sum <<" is not Palindrome";
		}
	}
	
};

void main()
{
	clrscr();
	//
	palindrome obj;
	obj.IsPalindrome();
	
}
