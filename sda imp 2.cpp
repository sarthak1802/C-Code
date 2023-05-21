#include <iostream>
using namespace std;
//program to replace all numbers that are divisible by 5 with the answer it using array (SDA)

int main()
{
    int n[]={5,8,16,15,19,17,10},i,c;
	
	for (i=0;i<7;i++)
	{
		if(n[i]%5==0)
		{
		    n[i]=n[i]/5;
		}
		else
		{
			n[i]=n[i]*3;
		}
	}
	for (i=0;i<7;i++)
	{
	cout<<n[i]<<"\t";
	}
}