#include <iostream>
using namespace std;
//program to store 9 numbers and print only even digit numbers 

int main()
{
	int n[9],i;
	for (i=0;i<9;i++)
	{
		cout << "enter number"<<endl;
		cin>>n[i];
	}
	for(i=0;i<9;i++)
	{
		if(n[i]%2==0)
		{
		cout<<"the number is "<<n[i]<<endl;
		}
	}
}