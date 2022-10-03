#include<iostream>
using namespace std;
class person
{
 	char name[30];
	int age;
	public:
		void getdata();
		void displaydata();
};
void person ::getdata()
{
	cout<<"enter name:";
	cin>>name;
	cout<<"enter age:\n";
	cin>>age;
}
void person :: displaydata()
{
	cout<<"\nname:"<<name;
	cout<<"\nage:"<<age;
}
int main()
{
	person p;
	p.getdata();
	p.displaydata();

return 0;
}
