#include <iostream>
using namespace std;
//program to input student name classs and roll no,  having 5 records and print all records

int main()
{
	char sn[20][5];
	int c[5],r[5];
	
	for(int i=0;i<5;i++) 
    {
	cout << "enter student name , class ,roll no"<<endl;
	cin>>sn[i]>>c[i]>>r[i];
	}
	for(int i=0;i<5;i++) 
    {
	cout<<sn[i]<<"\t"<<endl;
	cout<<c[i]<<"\t"<<endl;
	cout<<r[i]<<"\t"<<endl;
	}
}