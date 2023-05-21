#include <iostream>
using namespace std;
//program to store student name,roll,class; having 5 records and print all records using sda

int main()
{
	char sn[20][5];
	int cl[5],rl[5];
	
	for(int i=0;i<5;i++)
	{
		cout << "enter student name,class,roll no";
		cin>>sn[i]>>cl[i]>>rl[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<sn[i]<<"\t"<<cl[i]<<"\t"<<rl[i]<<endl;
	}
}