#include <iostream>
using namespace std;
//program to swap all even numbers with the number before it using array (SDA)

int main()
{
    int n[]={5,8,16,15,19,17,10},i,c;
	
	for (i=0;i<7;i++)
	{
		if(n[i]%2==0)
		{
		    c=n[i];
			n[i]=n[i-1];
			n[i-1]=c;
		}
	}
	for (i=0;i<7;i++)
	{
	cout<<n[i]<<"\t";
	}
}