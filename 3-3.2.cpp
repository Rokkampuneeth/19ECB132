#include<iostream>
#include<conio.h>
using namespace std;
int  main()
{
	int *arr;
	int size;
	cout<<"\n enter the size of an array :";
	cin>>size;
	
	cout<<"\n creating an array of size"<<size<<". .";
	arr = new int[size];
	cout<<"\n dynamic allocation of memory for array arr is successful .";
	delete arr;
	getch ();
	return 0;
}
